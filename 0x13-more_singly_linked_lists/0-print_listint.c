#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *head)
{
    size_t node_count = 0;

    while (head != NULL) {
        printf("%d\n", head->n);
        head = head->next;
        node_count++;
    }

    return node_count;
}

