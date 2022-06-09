#include "main.h"

/**
 * print_diagonal - display backslash n times
 * @n: number of times to display \
 * Description: Display backslash n times
 * Return: void
 */
void print_diagonal(int n)
{
    int i;
    int j = 0;

    if (n > 0)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < i; j++)
                _putchar(' ');
            _putchar('\\');
            _putchar('\n');
        }
    }
    else
        _putchar('\n');
}
