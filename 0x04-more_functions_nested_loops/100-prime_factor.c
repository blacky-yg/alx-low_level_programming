#include "main.h"

/**
 * main - largest prime of 612852475143
 *
 * Description: get largest prime of this number
 * Return: Success Always
 */
int main(void)
{
	long int x = 612852475143;
	long int y;

	for (y = 2; y < x; y++)
		if (x % y == 0)
			x = x / y;
	printf("%ld\n", y);
	return (0);
}
