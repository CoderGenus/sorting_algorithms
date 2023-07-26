#include "sort.h"
#include <stdbool.h>

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
	size_t i, length = size;
	bool bubble;

	if (array == NULL || size < 2)
		return;

	do
	{
		bubble = false;
		for (i = 0; i < length - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swapper(array + 1, array + i + 1);
				print_array(array, size);

				bubble = true;
			}
		}
		length--;
	} while (bubble);
}

