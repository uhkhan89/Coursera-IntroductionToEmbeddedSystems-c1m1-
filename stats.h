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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
/**
 * @brief Swaps the values of two unsigned characters.
 *
 * This function exchanges the values stored at the memory locations
 * pointed to by a and b.
 *
 * @param a Pointer to the first unsigned char.
 * @param b Pointer to the second unsigned char.
 */
void swap(unsigned char* a, unsigned char* b);

/**
 * @brief Partitions an array for the quicksort algorithm.
 *
 * This function selects the last element as a pivot and rearranges
 * the array such that all elements less than or equal to the pivot
 * come before it, and all greater elements come after it.
 *
 * @param arr Pointer to the array to partition.
 * @param low Starting index of the partition.
 * @param high Ending index of the partition (pivot index).
 * @return The index position of the pivot after partitioning.
 */
int partition(unsigned char* arr, int low, int high){


/**
 * @brief Sorts an array using the quicksort algorithm.
 *
 * This function recursively sorts the array in ascending order
 * by partitioning it around a pivot element.
 *
 * @param arr Pointer to the array to be sorted.
 * @param low Starting index of the array.
 * @param high Ending index of the array.
 */
void quicksort(unsigned char* arr, int low, unsigned int high);

/**
 * @brief Reverses the contents of an array.
 *
 * This function creates a temporary array and copies the elements
 * of the original array in reverse order.
 *
 * @param arr Pointer to the array to be reversed.
 * @param len Number of elements in the array.
 */
void reverseArray(unsigned char* arr, unsigned int len);

/**
 * @brief Prints a single integer statistic.
 *
 * This function prints the value pointed to by stat. If the pointer
 * is NULL, an error message is displayed.
 *
 * @param stat Pointer to the statistic to print.
 */

void print_statistics(int* stat);       // for Printing stats


/**
 * @brief Prints the contents of an unsigned character array.
 *
 * This function prints each element of the array as a character
 * separated by spaces.
 *
 * @param array Pointer to the array to print.
 * @param len Number of elements in the array.
 */

void print_array(unsigned char* array, unsigned int len);   // for printing array

/**
 * @brief Finds the median value of an array.
 *
 * This function assumes the array is already sorted and returns
 * the middle element as the median.
 *
 * @param array Pointer to the sorted array.
 * @param len Number of elements in the array.
 * @return The median value of the array.
 */
unsigned char find_median(unsigned char* array, unsigned int len);      // for finding median

/**
 * @brief Calculates the mean (average) value of an array.
 *
 * This function computes the arithmetic mean by summing all
 * elements and dividing by the number of elements.
 *
 * @param array Pointer to the array.
 * @param len Number of elements in the array.
 * @return The mean value of the array.
 */
unsigned int find_mean(unsigned char* array, unsigned int len);         // for finding mean

/**
 * @brief Finds the maximum value in an array.
 *
 * This function iterates through the array and returns the
 * largest element.
 *
 * @param array Pointer to the array.
 * @param len Number of elements in the array.
 * @return The maximum value in the array.
 */
unsigned int find_maximum(unsigned char* array, unsigned int len);          // for finding maximum from the array

/**
 * @brief Finds the minimum value in an array.
 *
 * This function iterates through the array and returns the
 * smallest element.
 *
 * @param array Pointer to the array.
 * @param len Number of elements in the array.
 * @return The minimum value in the array.
 */
unsigned int find_minimum(unsigned char* array, unsigned int len);              // for finding minimum from the array




/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
