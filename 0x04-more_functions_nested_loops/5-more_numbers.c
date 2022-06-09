#include "main.h"

/**
 * more_numbers - Display numbers from 0 to 14
 *
 * Description: Display numbers from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
    int i;
    int n;

    for (n = 0; n < 10; n++)
    {
        for (i = 0; i <= 14; i++)
        {
            if (i >= 10)
            {
                _putchar((i / 10) + 48);
                _putchar((i % 10) + '0');
            } else
                _putchar(i + '0');
        }
    }
    _putchar('\n');
}
