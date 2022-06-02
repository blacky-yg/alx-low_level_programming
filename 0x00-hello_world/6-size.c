#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long: %ld byte(s)\n", sizeof(unsigned long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
