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
    // list_t *head;
    // list_t *new;
    // list_t hello = {"World", 5, NULL};
    // size_t n;

    // head = &hello;
    // new = malloc(sizeof(list_t));
    // if (new == NULL)
    // {
    //     printf("Error\n");
    //     return (1);
    // }
    // new->str = strdup("Hello");
    // new->len = 5;
    // new->next = head;
    // head = new;
    // n = print_list(head);
    // printf("-> %lu elements\n", n);

    // printf("\n");
    // free(new->str);
    // new->str = NULL;
    // n = print_list(head);
    // printf("-> %lu elements\n", n);

    // free(new);


    // list_t *head;
    // list_t *new;
    // list_t hello = {"World", 5, NULL};
    // size_t n;

    // head = &hello;
    // new = malloc(sizeof(list_t));
    // if (new == NULL)
    // {
    //     printf("Error\n");
    //     return (1);
    // }
    // new->str = strdup("Hello");
    // new->len = 5;
    // new->next = head;
    // head = new;
    // n = list_len(head);
    // printf("-> %lu elements\n", n);
    // free(new->str);
    // free(new);

    list_t *head;

    head = NULL;
    add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    add_node(&head, "Bilal");
    add_node(&head, "Chandler");
    add_node(&head, "Damian");
    add_node(&head, "Daniel");
    add_node(&head, "Dora");
    add_node(&head, "Electra");
    add_node(&head, "Gloria");
    add_node(&head, "Joe");
    add_node(&head, "John");
    add_node(&head, "John");
    add_node(&head, "Josquin");
    add_node(&head, "Kris");
    add_node(&head, "Marine");
    add_node(&head, "Mason");
    add_node(&head, "Praylin");
    add_node(&head, "Rick");
    add_node(&head, "Rick");
    add_node(&head, "Rona");
    add_node(&head, "Siphan");
    add_node(&head, "Sravanthi");
    add_node(&head, "Steven");
    add_node(&head, "Tasneem");
    add_node(&head, "William");
    add_node(&head, "Zee");
    print_list(head);
    return (0);
}
