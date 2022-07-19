#include "lists.h"

/**
 * print_listint - Print all elements of a list
 * @h: linked_list
 *
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t nb = 0;

	for (; tmp; nb++, tmp = tmp->next)
		printf("%d\n", tmp->n);
	return (nb);
}
