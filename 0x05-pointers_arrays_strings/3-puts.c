#include "main.h"

/**
 * _puts - display a string
 * @s: a string
 *
 * Description: Get the length of a string
 * Return: length of the string
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
