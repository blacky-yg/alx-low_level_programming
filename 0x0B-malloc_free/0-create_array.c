#include "main.h"

/**
 * create_array - create an array
 * @size: size of the array
 * @c: char to use to fill the array
 *
 * Description: Print a string recursively
 * Return: the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	unsigned int i;

	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	array[i] = '\0';
	return (array);
}
