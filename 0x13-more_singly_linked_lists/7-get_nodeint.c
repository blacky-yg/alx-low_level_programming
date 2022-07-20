#include "lists.h"

/**
 * get_nodeint_at_index - get a specific node
 * @head: linked_list
 * @index: index of the specific node
 *
 * Return: the address of the specific node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	for (; i < index; i++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}
	return (head);
}
