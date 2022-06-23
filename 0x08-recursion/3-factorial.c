#include "main.h"

/**
 * factorial - calculate factorial of a number
 * @n: number to factor
 *
 * Description: Factorial of n
 * Return: void
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
