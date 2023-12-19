/*
 * file: 0-bubble_sort.c
 * Author: sweilam 
 */

#include "sort.h"
#include <stdlib.h>

/**
 * bubble_sort - bubble sorts  an array of integers
 * @array: the arrayy to be passed
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < (size - 1); j++)
        if( array[j] > array[j+1])
        {
            size_t temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            print_array(array,size);

        }


    
    }


}
