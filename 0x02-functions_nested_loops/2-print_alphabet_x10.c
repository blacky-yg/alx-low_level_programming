#include <unistd.h>

/**
 * print_alphabet_x10 - display function
 * Description: Display letter from a to z 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	for (int c = 0; c < 10; c++)
	{
		for (int i = 97; i <= 122; i++)
			putchar(i);
		putchar('\n');
	}
}
