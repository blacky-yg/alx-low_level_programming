#include <stdio.h>
/**
 * main - main block
 * Description: Display number in base 16
 * Return: 0
 */
int main(void)
{
	int c = 48;
	int d = 49;

	for (; c <= 57; c++)
	{
		d = 49;
		for (; d <= 57; d++)
		{
			if (c != d && c < d)
			{
				putchar(c);
				putchar(d);
				if (c + d != 113)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
