#include "main.h"

/**
 * argstostr - arguments to str
 * @ac: number of arguments
 * @av: array containing the arguments
 * Description: Transform arguments to str
 * Return: the arguments
 */
char *argstostr(int ac, char **av)
{
    int i, j, k, nb;
    char *str;

    if (ac == 0)
        return (NULL);
    for (i = nb = 0; i < ac; i++)
    {
        if (av[i] == NULL)
            return (NULL);
        for (j = 0; av[i][j]; j++)
            nb++;
        nb++;
    }
    str = malloc(nb + 1);
    if (str == NULL)
    {
        free(str);
        return (NULL);
    }
    for (i = j = k = 0; k < nb; k++)
    {
        if (av[i][j] == '\n')
        {
            str[k] = '\n';
            i++;
            k++;
            j = 0;
        }
        if (k < nb - 1)
            str[k] = av[i][j];
    }
    str[nb] = '\0';
    return (str);
}
