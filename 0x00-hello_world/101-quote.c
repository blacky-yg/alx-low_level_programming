#include <string.h>
#include <unistd.h>

/**
 * main - print something without printf and puts
 * 
 * Return: 0
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	unsigned long i = 0;

	for (; i < strlen(str); i++)
		write(1, &str[i], 1);
	return (1);
}
