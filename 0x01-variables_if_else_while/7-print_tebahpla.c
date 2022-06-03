#include <stdio.h>
/**
 * main - main block
 * Description: display alphabet  letter from z to a
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	for (; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
