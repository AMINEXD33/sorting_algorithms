#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


/**
 * bubble_sort- a function that sorts a list based
 * on the buble sort algorithms
 * @array: the array of ints
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	flag = FALSE;
	int x = 0;
	int tmp = 0;


	while (flag == FALSE)
	{
		for (x = 0 ; x < size - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				tmp = array[x];
				array[x] = array[x + 1];
				array[x + 1] = tmp;
			}
		}
	}
}
