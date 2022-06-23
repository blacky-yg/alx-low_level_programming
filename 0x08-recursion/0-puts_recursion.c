#include "main.h"

/**
 * _puts_recursion - print a string recursively
 * @s: string to print
 *
 * Description: Print a string recursively
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
	else
		_putchar('\n');
}
