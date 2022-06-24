#include "main.h"

/**
 * is_prime_number - check if a number is a prime or not
 * @n: the number to check
 * Description: check if a number is a prime or not
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n < 2 || (n != 2 && !(n % 2)))
		return (0);
	else
		return (recursive_div(n, 3));
}


/**
 * recursive_div - recursive divison by a number
 * @n: the number
 * @d: the divider
 * Description: recursive division by a number
 *
 * Return: 1 or 0
 */
int recursive_div(int n, int d)
{
	if (n % d == 0)
		return (0);
	else if (d / 2 > n)
		return (recursive_div(d, n + 2));
	else
		return (1);
}
