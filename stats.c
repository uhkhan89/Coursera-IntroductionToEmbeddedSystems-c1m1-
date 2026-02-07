/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file Assignment 1 
 * @brief: We have been asked to make statistics related functions
 *
 * <Add Extended Description Here>
 *
 * @author Umair Hafeez Khan
 * @date 5-02-2026
 *
 */



#include <stdio.h>
#include "stats.h"


/* Size of the Data Set */
#define SIZE (40)







void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned int mean, max, min, median;
 
  /* Statistics and Printing Functions Go Here */
  max = find_maximum(&test, SIZE);
  min = find_minimum(&test, SIZE);
  quicksort(&test, 0, SIZE-1);
  median = find_median(&test, SIZE);
  mean = find_mean(&test, SIZE);


  printf("Maximum Value: ");
  print_statistics(&max);
  printf("\n\r");

  printf("Minimum Value: ");
  print_statistics(&min);
  printf("\n\r");

  printf("Median Value: ");
  print_statistics(&median);
  printf("\n\r");

  printf("Mean Value: ");
  print_statistics(&mean);
  printf("\n\r");
}

/* Add other Implementation File Code Here */


void swap(unsigned char* a, unsigned char* b){
    unsigned char temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

int partition(unsigned char* arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;

    for(int j=low;j<=high-1;j++){
        if(arr[j] <= pivot)
        {
            i += 1;
            swap(&arr[i],&arr[j]);
        }
    }

    swap(&arr[i+1],&arr[high]);
    return i+1;


}

void quicksort( unsigned char *arr,int low, unsigned int high){
    if(low < high){
        int p = partition(arr,low, high);
        quicksort(arr,low, p - 1);
        quicksort(arr, p+1, high);


    }
}

void reverseArray(unsigned char *arr, unsigned int len){
    unsigned char arr2[len];
    for(unsigned int i=0;i<len;i++){
        arr2[i] = arr[len-i-1];
    }
    for(unsigned int i=0;i<len;i++){
        arr[i] = arr2[i];
    }
}

    
void print_statistics(int* stat)
{
    if (!stat) { printf("stat is NULL\n"); return; }
    printf("%d\n", *stat);
}


void print_array(unsigned char* array, unsigned int len)
{
    for(unsigned int i=0;i<len;i++ ){
      printf("%c ",array[i]);
    }
    printf("\n\r");
}


unsigned char find_median(unsigned char* array, unsigned int len){
    if(len%2==0){
      return array[len/2];
    }
    else if(len%2!=0){
      return array[(len+1)/2];
    }
}



unsigned int find_mean(unsigned char* array, unsigned int len){
    unsigned int sum = 0;
    for(unsigned int i=0;i<len;i++){
      sum += array[i];
    }
    return sum/len;
}


unsigned int find_maximum(unsigned char* array, unsigned int len){
    unsigned int max = array[0];
    for(unsigned int i=1;i<len;i++){
      if(max <= array[i]){
        max = array[i];
      }
    }
    return max;
}


unsigned int find_minimum(unsigned char* array, unsigned int len){
   unsigned int min = array[0];
    for(unsigned int i=1;i<len;i++){
      if(min > (unsigned int)array[i]){
        min = (unsigned int)array[i];
      }
    }
    return min;
}





