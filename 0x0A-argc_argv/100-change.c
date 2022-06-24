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
	int number = 0;
	int nb = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	for (; number > 0;)
	{
		nb++;
		if ((number - 25) >= 0)
		{
			number -= 25;
			continue;
		}
		if ((number - 10) >= 0)
		{
			number -= 10;
			continue;
		}
		if ((number - 5) >= 0)
		{
			number -= 5;
			continue;
		}
		if ((number - 2) >= 0)
		{
			number -= 2;
			continue;
		}
		number--;
	}
	printf("%d\n", nb);
	return (0);
}
