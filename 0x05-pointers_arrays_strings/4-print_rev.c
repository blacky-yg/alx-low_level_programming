#include "main.h"

/**
 * print_rev - display a string reverse
 * @s: a string
 *
 * Description: Display a string backword
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	for (; s[i]; i++)
	;
	for (; i > 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
