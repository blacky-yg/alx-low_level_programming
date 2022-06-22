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
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s);
	}
	if (s[i] == c)
		return (s);
	return (0);
}
