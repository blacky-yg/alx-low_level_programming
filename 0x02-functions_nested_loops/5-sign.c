#include "main.h"

/**
 * print_sign - check function
 * @n: num passed as parameter
 *
 * Description: print size of the number passed as parameter
 * Return: -1 and prints - if n < 0
 * 0 and prints 0 if n == 0
 * 1 and prints + if n > 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
