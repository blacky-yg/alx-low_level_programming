#include <unistd.h>
#include <stdio.h>

/**
 * _abs - check function
 * @n: number for the absolute ops
 *
 * Description: Compute the absolute value of an integer
 * Return: -1 and prints - if n < 0
 * 0 and prints 0 if n == 0
 * 1 and prints + if n > 0
 */
int _abs(int n)
{
	if (n >= 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-n);
	return (0);
}
