#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Size of a char: %zu \n", sizeof(char));
    printf("Size of an int: %ld \n", sizeof(int));
    printf("Size of a long: %ld \n", sizeof(long int));
    printf("Size of a long long: %ld\n", sizeof(long double));
    printf("Size of a float: %ld \n", sizeof(float));
    return (0);
}
