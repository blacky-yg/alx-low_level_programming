#include "main.h"

/**
 * puts2 - Prints odd letter
 * @str: a string
 *
 * Description: Print odd letter
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
