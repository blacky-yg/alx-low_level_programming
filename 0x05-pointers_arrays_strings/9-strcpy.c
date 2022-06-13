#include "main.h"

/**
 * _strcpy - cpy str from dest
 * @dest: destination string
 * @src: initial string
 *
 * Description: cpy str from dest
 * Return: the dest string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
