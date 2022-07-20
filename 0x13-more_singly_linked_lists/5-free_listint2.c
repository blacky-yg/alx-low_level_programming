#include "lists.h"

/**
 * free_listint2 - free a linked list of int
 * @head: linked_list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t **tmp = head;
	listint_t *cur;

	if (tmp)
	{
		for (; *head; *head = (*head)->next)
		{
			cur = *head;
			free(cur);
		}
		*tmp = NULL;
	}
}
