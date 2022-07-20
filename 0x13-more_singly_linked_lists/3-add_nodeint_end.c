#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a list
 * @head: linked_list
 * @n: integer for the node
 *
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node;
    listint_t *tmp = *head;

    new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return (NULL);
    new_node->n = n;
    new_node->next = NULL;
    if (tmp)
    {
        for (; tmp->next; tmp = tmp->next)
        {}
        tmp->next = new_node;
    }
    else
        *head = new_node;
	return (new_node);
}
