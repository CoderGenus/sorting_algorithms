#include "sort.h"

/**
 * swapper - swaps two numbers
 *
 * @a: first number to be swapped
 * @b: second number to be swapped
 */

void swapper(int *a, int *b)
{
        int temp = *a;
        *a = *b;
        *b = temp;
}


/**
 * selection_sort - sorts a list with the selection sort method
 *
 * @array: array of integers
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min_ind;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_ind = 1;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_ind])
			{
				min_ind = j;
			}
		}
		if (min_ind != i)
		{
			swapper(&array[i], &array[min_ind]);
			print_array(array, size);
		}
	}
}
