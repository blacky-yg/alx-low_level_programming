#include "lists.h"

/**
 * sum_listint - Get the sum of all nb in the list
 * @head: linked_list
 *
 * Return: the sum of the numbers
 */
int sum_listint(listint_t *head)
{
    listint_t *tmp = head;
    int sum = 0;

    for (; tmp; tmp = tmp->next)
        sum += tmp->n;
    return (sum);
}
