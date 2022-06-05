#include <stdio.h>
/**
 * main - main block
 * Description: Display all 2 2 distinct combinations of 4 digits
 * Return: 0
 */
int main(void)
{
	int c, d, e, f;

	for (c = 48; c <= 57; c++)
	{
		for (d = 48; d <= 57; d++)
		{
			for (e = 48; e <= 57; e++)
			{
				for (f = 48; f <= 57; f++)
				{
					if ((c * 10 + d) < (e * 10 + f))
					{
						putchar(c);
						putchar(d);
						putchar(' ');
						putchar(e);
						putchar(f);
						if (!((e == 57 && f == 57) && (c == 57 && d == 56)))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
