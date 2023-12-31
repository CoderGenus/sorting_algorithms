#include "sort.h"

/**
 * swap_nodes - swaps two nodes of a doubly linked list.
 * @list: the list
 * @node1: the first node
 * @node2: the second node
 */

void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2) {
    if (!node1 || !node2)
        return;

    if (node1->prev)
        node1->prev->next = node2;
    if (node2->next)
        node2->next->prev = node1;

    node1->next = node2->next;
    node2->prev = node1->prev;

    node1->prev = node2;
    node2->next = node1;

    if (!node2->prev)
        *list = node2;
}

/**
 * insertion_sort_list - sorts a doubly linked list via insertion sort
 *
 * @list - linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next;

	if (!list || !(*list) || !(*list)->next)
		return;

	while (current)
	{
		listint_t *insertion_point = current->prev;

		while (insertion_point && insertion_point->n > current->n)
		{
			swap_nodes(list, insertion_point, current);
			print_list(*list);
			insertion_point = current->prev;
		}

		current = current->next;
	}
}

/* void add_node(listint_t **list, int n) {
    listint_t *new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return;

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *list;

    if (*list)
        (*list)->prev = new_node;

    *list = new_node;
} */
