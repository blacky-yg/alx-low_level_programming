#include "main.h"

/**
 * _isupper - Is upper ?
 * @c: the letter to check
 *
 * Description: Check if a letter is uppercase or not
 * Return: 1 if it's upper, 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
