#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	size_t i;
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};

	size_t n = sizeof(array) / sizeof(array[0]);

	printf("Original array: ");
	for (i = 0; i < n; i++)
	{
		printf("%d", array[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");

	bubble_sort(array, n);

	printf("Sorted array: ");
	for (i = 0; i < n; i++)
	{
		printf("%d", array[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");

	return 0;
}
