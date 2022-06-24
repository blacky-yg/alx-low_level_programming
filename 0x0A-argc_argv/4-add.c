#include "main.h"

/**
 * main - print a string recursively
 * @argc: number of arguments
 * @argv: arguments tab
 *
 * Description: Block main
 * Return: 0
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i, j;
	int result = 0;

	for (i = 1; argv[i]; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
