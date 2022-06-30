#include "main.h"

/**
 * _strlen - length of a string
 * @s: a string
 *
 * Description: Get the length of a string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	;
	return (i);
}
