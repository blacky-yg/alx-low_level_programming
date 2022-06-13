#include "main.h"

/**
 * puts_half - Prints half of the str
 * @str: a string
 *
 * Description: Print half of the str
 * Return: void
 */
void puts_half(char *str)
{
	int len, n, i;

	for (len = 0; str[len]; len++)
	;
	n = (len - 1) / 2;
	for (i = n + 1; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
