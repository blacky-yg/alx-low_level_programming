#include "main.h"

/**
 * jack_bauer - display function
 *
 * Description: Display time from 00:00 to 23:59
 * Return: 0 by default
 */
void jack_bauer(void)
{
	int hr = 0;
	int min = 0;

	for (; hr <= 23; hr++)
	{
		min = 0;
		for (; min <= 59; min++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
