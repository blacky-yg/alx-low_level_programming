#include "main.h"

/**
 * _print_rev_recursion - print a rev string recursively
 * @s: string to print
 *
 * Description: Print a rev string recursively
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_print_rev_recursion(&s[i + 1]);
		_putchar(s[i]);
	}
}
