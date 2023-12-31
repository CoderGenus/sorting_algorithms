#ifndef _SORT_H
#define _SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/**
 * swapper - swaps two numbers
 *
 * @a: first number to be swapped
 * @b: second number to be swapped
 */

void swapper(int *a, int *b);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void add_node(listint_t **list, int n);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2);
void selection_sort(int *array, size_t size);


#endif
