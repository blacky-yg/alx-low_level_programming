#include "main.h"

/**
 * _memset - Set a char to an entier string
 * @s: pointer to the string
 * @b: char to change
 * @n: index
 *
 * Description: Set a memory with a char
 * Return: the final string *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
