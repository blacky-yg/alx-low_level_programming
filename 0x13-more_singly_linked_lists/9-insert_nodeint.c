#include "lists.h"

/**
 * insert_nodeint_at_index - Get the sum of all nb in the list
 * @head: linked_list
 * @idx: index of the node to add
 * @n: content of the new node
 *
 * Return: the sum of the numbers
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *tmp = NULL;
	unsigned int i = 0;

	if (!*head && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (; tmp && i < idx - 1; i++, tmp = tmp->next)
		{}
		if (!tmp)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
