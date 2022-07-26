#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename to create
 * @text_content: content to put in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, i;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, "u+rw");
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (-1);
	for (i = 0; text_content[i]; i++)
		write(fd, &text_content[i], 1);
	return (1);
}
