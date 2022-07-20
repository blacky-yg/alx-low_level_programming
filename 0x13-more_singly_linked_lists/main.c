#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    // listint_t *head;
    // listint_t *new;
    // listint_t hello = {8, NULL};
    // size_t n;

    // head = &hello;
    // new = malloc(sizeof(listint_t));
    // if (new == NULL)
    // {
    //     printf("Error\n");
    //     return (1);
    // }
    // new->n = 9;
    // new->next = head;
    // head = new;
    // n = print_listint(head);
    // printf("-> %lu elements\n", n);
    // free(new);

    listint_t *head;

    head = NULL;
    // add_nodeint(&head, 0);
    // add_nodeint(&head, 1);
    // add_nodeint(&head, 2);
    // add_nodeint(&head, 3);
    // add_nodeint(&head, 4);
    // add_nodeint(&head, 98);
    // add_nodeint(&head, 402);
    // add_nodeint(&head, 1024);

    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    return (0);
}
