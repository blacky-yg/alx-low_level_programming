#include "main.h"

/**
 * print_number - print an integer
 * @n: params an integer
 * Description: print an integer
 * Return: void
 */
void print_number(int n)
{
	int nb, d, c;

	if (n >= 0)
		nb = n;
	else
	{
		_putchar('-');
		nb = n * -1;
	}
	d = nb;
	c = 1;
	for (; d > 9; c *= 10)
		d /= 10;
	for (; c >= 1; c /= 10)
		_putchar(((nb / c) % 10) + '0');
}
