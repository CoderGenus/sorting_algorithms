#include "sort.h"

#include <stdio.h>

void swapper(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *array, size_t size) {
    size_t i, j;
    int swapped;

    for (i = 0; i < size - 1; i++) {
        swapped = 0;
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swapper(&array[j], &array[j + 1]);
                swapped = 1;
            }
        }

        /* Print the array after each pass (swapping iteration)*/
        for (j = 0; j < size; j++) {
            printf("%d", array[j]);
            if (j != size - 1) {
                printf(", ");
            }
        }
        printf("\n");

        /* If no two elements were swapped in the inner loop, the array is already sorted. */
        if (swapped == 0)
            break;
    }
}
