#include "main.h"

/**
 * main - copies a file content to another
 * @ac: number of arguments
 * @av: array containing the arguments
 *
 * Return: 98 or 97
 */
int main(int ac, char *av[])
{
	char content[BUFSIZ];
	int fd_from, fd_to, cl_from, cl_to, nb_chars;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((nb_chars = read(fd_from, content, BUFSIZ)) > 0)
	{
		if (nb_chars != write(fd_to, content, nb_chars) || fd_to < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(fd_to);
			exit(99);
		}
	}
	if (nb_chars < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	cl_to = close(fd_to);
	cl_from = close(fd_from);
	if (cl_from < 0 || cl_to < 0)
	{
		if (cl_from < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		if (cl_to < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
