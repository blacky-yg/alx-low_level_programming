#include "lists.h"

/**
 * free_listint2 - free a linked list of int
 * @head: linked_list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	for (; *head; *head = tmp)
	{
		tmp = (*head)->next;
		free(*head);
	}
}
