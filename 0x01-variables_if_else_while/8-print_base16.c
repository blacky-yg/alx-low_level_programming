#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: Random number and print the number depending
 * his size
 * Return: 0
 */
int main(void)
{
    int last_digit;
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    last_digit = n % 10;

    if (last_digit < 5)
        printf("Last digit of %i is %i and is less than 6 and not 0\n", n);
    else if (last_digit > 5)
        printf("Last digit of %i is %i and is greater than 5\n", n);
    else
        printf("%i is zero\n", n);
    return (0);
}
