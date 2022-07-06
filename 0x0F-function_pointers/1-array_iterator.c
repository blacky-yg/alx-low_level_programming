#include "function_pointers.h"

/**
* array_iterator - exec a fun on every elem of an array
* @array: array to be targeted
* @size: size of array
* @action: function to be executed
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;
	for (; size > 0; array++, size--)
		action(*array);
}
