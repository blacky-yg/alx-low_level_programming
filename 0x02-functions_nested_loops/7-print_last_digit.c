#include "main.h"

/**
 * print_last_digit - display function
 * @n: digit passed as parameter
 *
 * Description: print last digit of the num passed as parameter
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
		n = -n;
	putchar(n + '0');
	return (n);
}
