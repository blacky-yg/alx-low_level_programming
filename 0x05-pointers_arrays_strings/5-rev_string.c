#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: a string
 *
 * Description: Reverse a string
 * Return: void
 */
void rev_string(char *s)
{
	char *t = s;
	char n[1000];
	short c = 0;

	for (; *s; s++, c++)
		n[c] = *s;
	c = 0;
	for (; s > t; c++)
	{
		s--;
		*s = n[c];
	}
}
