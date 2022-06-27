#include "main.h"

/**
 * _strdup - Duplicate a string
 * @str: string to duplicate
 *
 * Description: Duplicate a string
 * Return: the duplicated string
 */
char *_strdup(char *str)
{
	int i, len_str;
	char *dup_str;

	for (len_str = 0; str[len_str]; len_str++)
	{}
	dup_str = malloc(len_str);
	if (dup_str == NULL || len_str <= 0)
		return (NULL);
	for (i = 0; i < len_str; i++)
		dup_str[i] = str[i];
	return (dup_str);
}
