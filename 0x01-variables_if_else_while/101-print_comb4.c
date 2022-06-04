#include <stdio.h>
/**
 * main - main block
 * Description: Display all 2 distinct combinations of 3 digits
 * Return: 0
 */
int main(void)
{
	int c = 48;
	int d = 49;
	int e = 49;

	for (; c <= 57; c++)
	{
		d = 49;
		for (; d <= 57; d++)
		{
			e = 49;
			for (; e <= 57; e++)
			{
				if ((c != d && d != e && c != e) && (c < d && c < d && d < e))
				{
					putchar(c);
					putchar(d);
					putchar(e);
					if (c + d + e != 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
