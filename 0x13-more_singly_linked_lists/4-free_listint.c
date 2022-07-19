#include "lists.h"

/**
 * free_listint - free a linked list of int
 * @head: linked_list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *tmp;

    for (; head; head = head->next)
    {
        tmp = head;
        free(tmp);
    }
}
