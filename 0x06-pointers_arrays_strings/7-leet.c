#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: initial string
 *
 * Description: Encode a string into 1337
 * Return: the encoded string
 */
char *leet(char *str)
{
	int i, j, k;
	char *letters = "oOlLeEaAtT";
	char *digits = "0011334477";

	for (i = 0; str[i]; i++)
	{
		k = 0;
		for (j = 0; letters[j]; j++)
		{
			if (str[i] == letters[j])
			{
				k = j;
				str[i] = digits[k];
			}
		}
	}
	return (str);
}
