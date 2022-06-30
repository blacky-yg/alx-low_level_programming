#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: main string
 * @src: completed string
 * @n: numbers of characters
 *
 * Description: Copies a string
 * Return: the final string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
