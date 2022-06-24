#include "main.h"

/**
 * main - print the binary name
 * @argv: arguments tab
 *
 * Description: Block main
 * Return: 0
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
		printf("%s\n", argv[i]);

	return (0);
}
