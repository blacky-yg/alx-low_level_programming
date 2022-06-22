#include "main.h"

/**
 * _memcpy - Copy an entier memory
 * @dest: pointer to the dest string
 * @src: pointer to the src string
 * @n: size to copy
 *
 * Description: Copy n char of a string
 * Return: the final string *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
