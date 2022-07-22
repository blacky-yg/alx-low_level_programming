#include "main.h"

/**
 * get_bit - get bit at an index
 * @n: long int
 * @index: index to get
 *
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;

	bit = (n >> index);
	if (index <= 32)
		return (bit & 1);
	return (-1);
}
