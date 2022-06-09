#include "main.h"

/**
 * print_number - print an integer
 * @n: params an integer
 * Description: print an integer
 * Return: void
 */
void print_number(int n)
{
	int i;

    if (n >= 0)
        i = n;
    else
	{
		i = -n;
		_putchar('-');
	}
	if (i / 10)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
