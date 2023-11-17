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
	size_t x, step, smaller;
	int tmp = 0;

	if (!array || size == 0)
		return;

	for (step = 0; step < size - 1; step++)
	{
		smaller = step;
		for (x = step + 1; x < size; x++)
		{
			if (array[x] < array[smaller])
				smaller = x;
		}
		if (smaller != step)
		{
			tmp = array[smaller];
			array[smaller] = array[step];
			array[step] = tmp;
			print_array(array, size);
		}
	}
}

