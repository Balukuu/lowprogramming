#include <stdio.h>
#include "lists.h"

/* 
 * Prints all the integers in a linked list of type listint_t
 * pointed to by the parameter 'head'. Returns the number of nodes 
 * in the list.
 */
size_t print_listint(const listint_t *head) {
    size_t node_count = 0;

    /* Traverse the linked list, printing each integer and counting nodes */
    while (head != NULL) {
        printf("%d\n", head->n);
        head = head->next;
        node_count++;
    }

    return node_count;
}

