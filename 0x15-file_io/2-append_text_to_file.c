#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: The textfile
 * @text_content: The text
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == NULL)
	{
		close(pd);
		return (-1);
	}
	n_bytes = write(filename, text_content, _strlen(text_content));
	close(fd):
	if (n_bytes < 0)
		return (-1);
	return (1);
}
