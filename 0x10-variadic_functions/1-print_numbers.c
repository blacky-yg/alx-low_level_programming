#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers follow by a new line
 * @separator: string printed between numbers
 * @n: number of paramerts
 *
 * Description: Returns the sum of all its parameters
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			if (separator)
				printf("%d%s", va_arg(args, int), separator);
			else
				printf("%d", va_arg(args, int));
		}
		else
			printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
