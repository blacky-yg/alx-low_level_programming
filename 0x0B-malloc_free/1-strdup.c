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

	if (str == NULL)
		return (NULL);
	for (len_str = 0; str[len_str]; len_str++)
	{}
	if (len_str <= 0)
		return (NULL);
	dup_str = malloc(len_str + 1);
	if (dup_str == NULL)
		return (NULL);
	for (i = 0; i < len_str; i++)
		dup_str[i] = str[i];
	dup_str[i] = '\0';
	return (dup_str);
}
