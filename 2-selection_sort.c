#include "sort.h"
#include <stdio.h>

/**
 * selection_sort- sort an array with the selection sort
 * algorithm
 * @array: the array of ints
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int flag = FALSE;
	size_t x = 0;
	size_t new_limit = 0;
	int smaller = 0;
	int tmp = 0;

	if (!array || size == 0)
		return;
	smaller = 0;
	while (flag == FALSE)
	{
		flag = TRUE;
		for (x = new_limit; x < size; x++)
		{
			if (array[x] < array[smaller])
			{
				flag = FALSE;
				smaller = x;
			}
		}
		if (flag == FALSE)
		{
			tmp = array[new_limit];
			array[new_limit] = array[smaller];
			array[smaller] = tmp;
			new_limit++;
		}
		print_array(array, size);
	}
}

