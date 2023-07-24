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
	size_t i;
	size_t j;
	int swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapper(&array[j], &array[j + 1]);
				swapped = 1;
			}
		}
		for (j = 0; j < size; j++)
		{
			printf("%d", array[j]);
		}
		}
		if (j != size - 1)
		{
			printf(", ");
		}
		printf("\n");
		
		if (swapped == 0) /* If no two elements were swapped in the inner loop, the array is already sorted. */
			break;
	}
}
