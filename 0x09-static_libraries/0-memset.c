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
char *_memset(char __attribute__((unused)) *s, char __attribute__((unused)) b,
			  unsigned int __attribute__((unused)) n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
