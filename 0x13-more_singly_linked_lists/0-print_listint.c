#include "lists.h"

/**
 * print_listint - Print all elements of a list
 * @h: linked list
 *
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t nb = 0;

	for (; tmp; tmp = tmp->next, nb++)
		printf("%d\n", tmp->n);
	return (nb);
}
