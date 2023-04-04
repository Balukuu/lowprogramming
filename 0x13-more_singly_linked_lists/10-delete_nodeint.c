#include "lists.h"

/**
 * delete_nodeint_at_index - Removes a node from a linked list at a given index.
 * @head: A pointer to the address of the head of the linked list.
 * @index: The index of the node to be deleted (starting from 0).
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
        listint_t *temp, *current = *head;
        unsigned int node;

        if (current == NULL)
                return (-1);

        if (index == 0)
        {
                *head = (*head)->next;
                free(current);
                return (1);
        }

        for (node = 0; node < (index - 1); node++)
        {
                if (current->next == NULL)
                        return (-1);

                current = current->next;
        }

        temp = current->next;
        current->next = temp->next;
        free(temp);
        return (1);
}

