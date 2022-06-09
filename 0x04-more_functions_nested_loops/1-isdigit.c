#include "main.h"

/**
 * _isdigit - Is Digit ?
 * @c: the digit to check
 *
 * Description: Check if a char is a digit or not
 * Return: 1 if it's a digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
