#include "main.h"

/**
 * create_file - Function creates a file
 * and writes a string into it
 * @filename: The file to be created
 * @text_content: The string to be written into the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, n_bytes;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	n_bytes = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (n_bytes < 0)
	{
		return (-1);
	}
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

	if (str == NULL)
		return (-1);
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
