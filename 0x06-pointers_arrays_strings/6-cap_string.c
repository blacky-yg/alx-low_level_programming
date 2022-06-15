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
        if (str[i] == '\\' && (str[i + 1] == 'n' || str[i + 1] == 't'))
            i += 2;
        if (str[i] == '.' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
            str[i + 1] -= 32;
        // if (str[i] == '.' && str[i + 1] == ' ')
            // str[i + 2] += 32;
		// if (str[i] >= 'a' && str[i] <= 'z')
		// 	str[i] = str[i] - 32;
	}
	return (str);
}
