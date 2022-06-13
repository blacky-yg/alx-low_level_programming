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
	int len;

	for (len = 0; s[len]; len++)
	;
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
