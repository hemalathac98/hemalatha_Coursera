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
 * @file stats.h
 * @brief Header file for stats.c having all the function prototypes
 *
 * This file has 8 function prototypes
 *
 * @author C Hemalatha
 * @date 07-09-2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


 


/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean and median
 *
 * 
 * @param No parameters

 *
 * @return No return values
 */
void print_statistics();

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 *
 * @param array array of data
 * @param length length of the array
 *
 * @return NULL
 */
void print_array(char *array, int length);

/**
 * @brief Calculates median value
 *
 * @param array array of data
 * @param length length of array

 *
 * @return returns median value
 */
int find_median(char *array, int length);

/**
 * @brief Calculates mean value
 *
 * @param array array of data
 * @param length length of array

 *
 * @return returns mean value
 */
int find_mean(char *array, int length);

/**
 * @brief Calculates maximum value
 *
 * @param array array of data
 * @param length length of array

 *
 * @return returns maximum value
 */
int find_maximum(char *array, int length);

/**
 * @brief Calculates minimum value
 *
 * @param array array of data
 * @param length length of array

 *
 * @return returns minimum value
 */
int find_minimum(char *array, int length);

/**
 * @brief sorts the array from largest to smallest
 *
 * @param array array of data
 * @param length length of array

 *
 * @return no return value
 */
void sort_array(char *array, int length);



#endif /* __STATS_H__ */
