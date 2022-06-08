#include "main.h"

/**
 * print_alphabet: display function simple function
 * Description: display letter from a to z
 * Return: 0
 */
void print_alphabet(void)
{
	for (char i = 97; i <= 122; i++)
		write(1, &i, 1);
	write(1, "\n", 1);
}

