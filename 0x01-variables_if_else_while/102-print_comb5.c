#include <stdio.h>
/**
 * main - main block
 * Description: Display all 2 2 distinct combinations of 4 digits
 * Return: 0
 */
int main(void)
{
	int c, d, e, f;
	int i, j;

	for (i = 0; i < 100; i++)
	{
		c = i / 10;
		d = i % 10;
		for (j = 0; j < 100; j++)
		{
			e = j / 10;
			f = j % 10;
			if ((c == e && d < f) || c < e)
			{
				putchar(c + '0');
				putchar(d + '0');
				putchar(' ');
				putchar(e + '0');
				putchar(f + '0');
				if (!(d == 8 && c == 9))
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
