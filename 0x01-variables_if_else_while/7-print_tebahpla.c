#include <stdio.h>
/**
 * main - main block
 * Description: display alphabet letter from a to z except e and q
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
