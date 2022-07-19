#include "lists.h"

/**
 * print_listint - Print all elements of a list
 * @h: linked_list
 *
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t nb;

	tmp = h;
	for (nb = 0; tmp; tmp = tmp->next, nb++)
		printf("%d\n", tmp->n);
	return (nb);
}
