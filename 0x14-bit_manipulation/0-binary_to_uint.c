#include "main.h"

/**
 * binary_to_uint - converts binary num to an uint
 * @b: string containing 0 and 1
 *
 * Return: binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin_nb = 0;
	int i = 0;

	if (!b)
		return (0);
	for (; b[i]; i++)
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		bin_nb = 2 * bin_nb + (b[i] - 48);
	}
	return (bin_nb);
}
