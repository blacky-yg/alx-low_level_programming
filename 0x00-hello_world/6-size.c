#include <stdio.h>
#include <limits.h>

/**
 * main - Display sizeof 5 types in c
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	if (sizeof(void *) == 4)
		printf("Size of a long long int: %ld byte(s)\n", sizeof(unsigned long int));
	else
		printf("Size of a long long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
