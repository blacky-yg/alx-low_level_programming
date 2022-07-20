#include "lists.h"

/**
 * pop_listint - delete the head of a linked list
 * @head: linked_list
 *
 * Return: the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *first_node;
	int nb = 0;

	if (!*head)
		return (0);
	first_node = *head;
	*head = first_node->next;
	nb = first_node->n;
	free(first_node);
	return (nb);
}
