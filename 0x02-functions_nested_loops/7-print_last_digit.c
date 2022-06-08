#include "main.h"

/**
 * print_last_digit - display function
 * @n: digit passed as parameter
 *
 * Description: print last digit of the num passed as parameter
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
    char last;

    if (n < 0)
    {
        last = -n % 10;
        _putchar(last);
        return (last);
    }
    last = n % 10;
    _putchar(last);
    return (last);
}
