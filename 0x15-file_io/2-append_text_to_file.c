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
	if (text_content != NULL)
	{
		fd = open(filename, O_RDWR | O_APPEND);
		if (fd == -1)
		{
			close(fd);
			return (-1);
		}
		n_bytes = write(fd, text_content, _strlen(text_content));
		if (n_bytes < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

/**
 * _strlen - Gets a string length
 * @str: The string
 *
 * Return: The length
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
