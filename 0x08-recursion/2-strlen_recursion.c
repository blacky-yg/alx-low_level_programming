#include "main.h"

/**
 * _strlen_recurs - print a rev string recursively
 * @s: string to print
 *
 * Description: Print a rev string recursively
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (!s[i])
		return (0);
	return (_strlen_recursion(&s[i + 1]) + 1);
}
