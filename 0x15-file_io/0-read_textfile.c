#include "main.h"

/**
 * read_textfile - reads and prints a text file
 * @filename: filename to open
 * @letters: numbers of letters to read and print
 *
 * Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, i;
	size_t nb_chars = 0;
	char *content = NULL;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	content = malloc(letters + 1);
	nb_chars = read(fd, content, letters);
	if (nb_chars == (size_t)-1)
		return (0);
	for (i = 0; content[i]; i++)
		write(STDOUT_FILENO, &content[i], 1);
	free(content);
	return (nb_chars);
}
