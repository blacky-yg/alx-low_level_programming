#include "lists.h"

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
