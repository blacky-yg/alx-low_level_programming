#include "main.h"

/**
 * times_table - times function
 *
 * Description: Display mul table for 9
 * Return: 0 by default
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
			result = i * j;
			if (j == 0)
				putchar(result + 48);
			else if (result >= 10)
			{
				putchar(' ');
				putchar(result / 10 + 48);
			    putchar(result % 10 + 48);
			}
			else
			{
				putchar(' ');
				putchar(' ');
				putchar(result + '0');
			}
			if (j != 9)
				putchar(',');
        }
        putchar('\n');
    }
}
