#include "lists.h"

/**
 * list_len - Number of elements in the list
 * @h: linked_list
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp = h;
	size_t len = 0;

	for (; tmp; tmp = tmp->next, len++)
	{}
	return (len);
}
