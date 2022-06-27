#include "main.h"

/**
 * _strlen - length of a string
 * @s: a string
 *
 * Description: Get the length of a string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	for (; s[i]; i++)
	{}
	return (i);
}

/**
 * str_concat - print a string recursively
 * @s1: first string
 * @s2: second string to concatenate
 *
 * Description: Concatanates two strings
 * Return: the final string
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;
	char *final_str = NULL;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	final_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (final_str == NULL)
	{
		free(final_str);
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
		final_str[i] = s1[i];
	for (j = 0; j <= len_s2; i++, j++)
		final_str[i] = s2[j];
	return (final_str);
}
