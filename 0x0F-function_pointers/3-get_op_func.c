#include "3-calc.h"

/**
* get_op_func - select the operator and return the correct one
* @s: operator

* Description: Select the correct operator
* Return: pointer to the correct function
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	for (; ops[i].op && *(ops[i].op) != *s; i++)
	{}
	return (ops[i].f);
}
