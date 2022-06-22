#include "main.h"

/**
 * _strchr - Search a char in a string
 * @s: main string
 * @c: char to search
 *
 * Description: Search a char in a string
 * Return: the final string *s
 */
char *_strchr(char *s, char c)
{
	for (; *s; s++)
		if (*s == c)
			return (s);
	if (*s == c)
		return (s);
	return (0);
}
