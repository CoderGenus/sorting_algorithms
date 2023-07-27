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

/** bubble_sort -  sorts numbers
 * @array: array of numbers
 * @size: size of the array
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	int swapped;
	size_t i, j;

	if (size < 2)
		return;

	for (i = 0; i < size - i; i++)
	{
		swapped = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapper(&array[j], &array[j + 1]);
				swapped = 1;
				print_array(array, size);
			}
		}

		if (!swapped)
			break;
		
		print_array(array, size);
	}
}
