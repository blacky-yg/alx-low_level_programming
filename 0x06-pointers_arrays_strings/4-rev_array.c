#include "main.h"

/**
 * reverse_array - Reverse an array
 * @a: array
 * @n: size of the array
 *
 * Description: Reverse an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
