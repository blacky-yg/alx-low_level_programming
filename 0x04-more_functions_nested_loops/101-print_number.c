#include "main.h"

/**
 * print_number - print an integer
 * @n: params an integer
 * Description: print an integer
 * Return: void
 */
void print_number(int n)
{
	int i, d, c;

	if (n >= 0)
		i = n;
	else
	{
		_putchar('-');
		i = n * -1;
	}
	d = i;
	c = 1;
	for (; d > 9; c *= 10)
		d /= 10;
	for (; c >= 1; c /= 10)
		_putchar(((i / c) % 10) + '0');
}
