#include "3-calc.h"

/**
* get_op_func - select the operator and return the correct one
* @s: operator

* Description: Select the correct operator
* Return: pointer to the correct function
*/
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add}, {"-", op_sub},
		{"*", op_mul}, {"/", op_div},
		{"%", op_mod}, {NULL, NULL}
	};

	for (i = 0; ops[i].op && *(ops[i].op) != *s; i++)
	{}
	return (ops[i].f);
}
