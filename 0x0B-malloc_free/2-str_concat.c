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
	int len_s1 = _strlen(s1);
	int len_s2 = _strlen(s2);
	char *final_str = malloc(len_s1 + len_s2 + 1);
	int i;

	if (final_str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		final_str[i] = s1[i];
	for (i = 0; s2[i]; i++, len_s1++)
		final_str[len_s1] = s2[i];
	final_str[len_s1 + len_s2] = '\0';
	return (final_str);
}
