#include "lists.h"

/**
 * add_node - add new node to the list
 * @head: linked_list
 * @str: string
 *
 * Return: the new linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node)
	{
		node->str = strdup(str);
		node->len = strlen(str);
		node->next = *head;
	}
	else
		return (NULL);
	if (*head)
		node->next = *head;
	*head = node;
	return (node);
}
