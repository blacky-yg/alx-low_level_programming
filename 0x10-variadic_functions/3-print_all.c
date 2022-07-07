#include "variadic_functions.h"

/**
 * print_all - print all type of args
 * @format: format to print
 *
 * Description: Returns the sum of all its parameters
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	int arg;
	char type;
	va_list args;

	va_start(args, format);
	for (i = 0; format && format[i]; i++)
	{
		arg = get_format(format);
		type = *(format + i);
		switch (type)
		{
		case 'c':
			printf("%c", va_arg(args, int));
			display_sep(i, arg);
			i++;
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			display_sep(i, arg);
			i++;
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			display_sep(i, arg);
			i++;
			break;
		case 's':
			printf("%f", check_string(va_arg(args, char *)));
			display_sep(i, arg);
			i++;
			break;
		default:
			break;
		}
	}
	printf("\n");
	va_end(args);
}

/**
 * display_sep - prints the separator
 * @i: current arg
 * @j: last_arg
 *
 * Return: void
 */
void display_sep(int i, int j)
{
	if (i != j)
		printf(", ");
}


/**
 * get_format - get format type
 * @format: type of the string
 *
 * Return: int
 */
int get_format(char *format)
{
	int i = 0;
	int j = 0;
	char type;

	for (; (*(format + j)) && format;)
	{
		switch (type)
		{
		case 'c':
			i = j;
			j++;
			break;
		case 'i':
			i = j;
			j++;
			break;
		case 'f':
			i = j;
			j++;
			break;
		case 's':
			i = j;
			j++;
			break;
		default:
			j++;
			break;
		}
	}
	return (i);
}


/**
 * print_comma - prints a comma and space when valid
 * @j: first number to be compared
 * @x: second number to be compared
 *
 * Return: void
 */
void print_comma(int j, int x)
{
	if (j != x)
	{
		printf(", ");
	}
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
