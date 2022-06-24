#include "main.h"

/**
 * main - add two numbers
 * @argc: number of arguments
 * @argv: arguments tab
 *
 * Description: Block main
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[2]) * atoi(argv[1]));
	return (0);
}
