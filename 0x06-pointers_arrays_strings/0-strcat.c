#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: main string
 * @src: completed string
 *
 * Description: Concatenates two strings
 * Return: the final string
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int i = 0;

	for (len = 0; dest[len]; len++)
	;
	for (i = 0; src[i]; i++, len++)
		dest[len] = src[i];
	dest[len] = '\0';
	return (dest);
}
