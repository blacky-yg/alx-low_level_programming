#include "lists.h"

/**
 * print_list - Print all elements of a list
 * @h: linked_list
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
    const list_t *tmp = h;
	size_t nb = 0;

    for (; tmp; tmp = tmp->next, nb++)
    {
        if (tmp->str)
            printf("[%d] %s\n", tmp->len, tmp->str);
        else
            printf("[0] (nil)\n");
    }
    return (nb);
}
