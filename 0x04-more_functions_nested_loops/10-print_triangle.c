#include "main.h"

/**
 * print_triangle - print a triangle using #
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int n;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = size - 1 - i; j > 0; j--)
			_putchar(' ');
		for (n = 0; n <= i; n++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
