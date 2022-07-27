#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: filename to open
 * @text_content: content to put in the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, nb_chars = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
		{}
		nb_chars = write(fd, text_content, i);
		if (i != nb_chars)
			return (-1);
	}
	close(fd);
	return (1);
}
