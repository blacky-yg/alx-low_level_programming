#include "variadic_functions.h"

/**
 * print_strings - Prints strings follow by a new line
 * @separator: string printed between numbers
 * @n: number of paramerts
 *
 * Description: Returns the sum of all its parameters
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			if (separator)
				printf("%s%s", check_string(va_arg(args, char *)), separator);
			else
				printf("%s", check_string(va_arg(args, char *)));
		}
		else
			printf("%s", check_string(va_arg(args, char *)));
	}
	printf("\n");
	va_end(args);
}

/**
 * check_string - check string and set the value to (nil)
 * @s: string
 *
 * Return: pointer to @s
 */
char *check_string(char *s)
{
	if (!s)
		s = "(nil)";
	return (s);
}
