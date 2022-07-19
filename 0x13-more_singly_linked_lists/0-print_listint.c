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

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		nb += 1;
		tmp = tmp->next;
	}
	return (nb);
}