#include "main.h"

/**
 * print_array - Display all numbers of an array
 * @a: array
 * @n: numbers of elemens of the array
 *
 * Description: Display all nums of an array
 * Return: void
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("\n");
}
