#include "main.h"

/**
 * print_most_numbers - Display numbers with _putchar except 2 && 4
 *
 * Description: Display numbers except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		if (i != 50 && i != 52)
			_putchar(i);
	_putchar('\n');
}
