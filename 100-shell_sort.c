#include "sort.h"

/**
 * swap_items - Swaps two items in an array.
 * @array: The array to modify.
 * @l: The index of the left item.
 * @r: The index of the right item.
 */
void swap_items(int *array, size_t l, size_t r)
{
	int tmp;

	if (array != NULL)
	{
		tmp = array[l];
		array[l] = array[r];
		array[r] = tmp;
	}
}
/**
 * shell_sort- sort a list using shell sort
 * with the Knuth’s Interval
 * @array: the array
 * @size: the size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 0;
	size_t x, y;

	if (size < 2)
	{
		return;
	}
	while (gap <= size / 3)
	{
		gap = gap * 3 + 1;
	}
	while (gap >= 1)
	{
		for (x = gap; x < size; x++)
			for (y = x; y >= gap && array[y] < array[y - gap]; y -= gap)
				swap_items(array, y, (y - gap));

		gap = gap / 3;
		print_array(array, size);
	}
}
