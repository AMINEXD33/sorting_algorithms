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
	int flag = FALSE;
	size_t x = 0;
	int tmp = 0;

	if (!array || size == 0)
		return;

	while (flag == FALSE)
	{
		flag = TRUE;
		for (x = 0 ; x < size - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				tmp = array[x + 1];
				array[x + 1] = array[x];
				array[x] = tmp;
				flag = FALSE;
				print_array(array, size);
			}
		}
		if (flag == TRUE && x == 0)
		{
			break;
		}
	}
}
