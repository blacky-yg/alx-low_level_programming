#include "main.h"

/**
 * cap_string - Capitalize every letter of a string
 * @str: initial string
 *
 * Description: Capitalize every letter of a string
 * Return: the upper string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&
				(str[i - 1] == '!' || str[i - 1] == ' ' ||
				str[i - 1] == '\t' || str[i - 1] == '\n' ||
				str[i - 1] == '(' || str[i - 1] == ')' ||
				str[i - 1] == '?' || str[i - 1] == '"' ||
				str[i - 1] == '{' || str[i - 1] == '}' ||
				str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'))
			str[i] -= 32;
		else if (str[0] >= 'a' && str[0] <= 122)
			str[i] -= 32;
		else
			continue;
	}
	return (str);
}
