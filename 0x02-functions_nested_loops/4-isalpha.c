#include <unistd.h>

/**
 * _isalpha: check function
 * @c: num passed as parameter
 *
 * Description: Check if a letter is alphanum or not
 * Return: 0 if c isn't alpha, 1 if c is alphanum
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
