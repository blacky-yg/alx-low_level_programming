#include "function_pointers.h"

/**
* int_index - Searches an integer in an array
* @array: array with the elements
* @size: size of the array
* @cmp: compare function
*
* Description: Searches an integer in an array
* Return: -1 or 0 when size < 0 or a pointer to the 1st elem
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
