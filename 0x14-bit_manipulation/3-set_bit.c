#include "main.h"

/**
 * set_bit - set bit
 * @n: long int
 * @index: index to get
 *
 * Return: bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
