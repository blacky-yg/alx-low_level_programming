#include <stdio.h>
/**
 * main - main block
 * Description: display alphabet letter from a to z
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
