#include "main.h"

/**
 * print_binary - print binary number
 * @n: string containing 0 and 1
 *
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
