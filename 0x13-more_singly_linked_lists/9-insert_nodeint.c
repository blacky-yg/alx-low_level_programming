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
	listint_t *node = NULL;
	listint_t *prev = NULL;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (!node || idx > listint_len(*head))
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	return (NULL);
}


/**
 * listint_len - Count number of node in the list
 * @h: linked_list
 *
 * Return: number of elements in the node
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t nb = 0;

	for (; tmp; tmp = tmp->next, nb++)
	{}
	return (nb);
}
