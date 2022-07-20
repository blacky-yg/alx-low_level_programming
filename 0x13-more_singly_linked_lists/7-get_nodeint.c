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
	listint_t *node;
	unsigned int i = 0;

	for (; head; head = head->next, i++)
	{
		if (i > index)
			return (NULL);
		else if (i == index)
		{
			node = head;
			break;
		}
	}
	return (node);
}
