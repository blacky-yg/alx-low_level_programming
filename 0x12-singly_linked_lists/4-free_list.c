#include "lists.h"

/**
 * free_list - free a linked list
 * @head: linked_list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head)
	{
        for(; head; head = head->next)
		{
			tmp = head;
			free(tmp->str);
			free(tmp);
		}
	}
}
