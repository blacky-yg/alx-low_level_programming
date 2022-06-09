#include "main.h"

/**
 * print_to_98 - display function
 * @n: num to start with
 *
 * Description: Display every numbers from n to 98
 * Return: 0 by default
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n >= 0 && n <= 9)
				putchar(n + '0');
			else if (n >= 10)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
			}
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (; n != 98; n--)
		{
			if (n >= 0 && n <= 9)
				putchar(n);
			else if (n >= 10)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
			}
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
