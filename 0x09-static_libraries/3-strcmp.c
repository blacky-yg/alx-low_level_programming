#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: Compare two strings
 * Return: the difference between the two
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	for (i = 0; s1[i] == s2[i] && s1[i]; i++)
	{}
	if (s1[i] != s2[i])
		diff = s1[i] - s2[i];
	return (diff);
}
