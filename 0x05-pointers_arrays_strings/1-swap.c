#include "main.h"

/**
 * swap - Swap two int
 * @a: first int
 * @b: second int
 *
 * Description: Swap two int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
