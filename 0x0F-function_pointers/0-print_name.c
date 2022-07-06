#include "function_pointers.h"

/**
 * print_name - Print a name
 * @name: string
 * @f: function pointer to print
 *
 * Description: Print a name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
