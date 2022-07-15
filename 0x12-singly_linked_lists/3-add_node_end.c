#include "lists.h"

/**
 * add_node_end - add an element to the end of the list
 * @head: linked_list
 * @str: string
 *
 * Return: size_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *node;
    list_t *tmp = *head;

    node = malloc(sizeof(list_t));
    if (node)
    {
        node->str = strdup(str);
        node->len = strlen(str);
        node->next = NULL;
    }
    else
        return (NULL);
    if (tmp)
    {
        for (; tmp->next; tmp = tmp->next)
        {}
        tmp->next = node;
    }
    else
        *head = node;
	return (node);
}
