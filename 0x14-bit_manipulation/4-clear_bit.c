#include "main.h"

/**
 * clear_bit - clear bit
 * @n: long int
 * @index: index to get
 *
 * Return: bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
