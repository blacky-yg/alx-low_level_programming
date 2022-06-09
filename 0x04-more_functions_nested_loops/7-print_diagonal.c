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
        for (i = 1; i <= n; i++)
        {
            _putchar('\\');
            _putchar('\n');
            for (j = 0; j < i; j++)
                _putchar(' ');
        }
    }
    _putchar('\n');
}
