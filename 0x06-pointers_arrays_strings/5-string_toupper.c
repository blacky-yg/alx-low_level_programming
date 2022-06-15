#include "main.h"

/**
 * string_toupper - Convert every letter of a string to upper
 * @str: initial string
 *
 * Description: Convert a string to upper
 * Return: the upper string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
