#include <stdio.h>

/**
 * main: print positive or negative numbers
 * void
 * display digits with putchar and comma
 * return 0
 */
int main(void)
{
	int i = 0;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
