#include "main.h"

/**
 * _sqrt - calculate the natural square root of n
 * @n: the number
 * @i: the power
 *
 * Description: square root of n
 * Return: the result
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - calculate the natural square root of n
 * @n: the number
 *
 * Description: square root of n
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
