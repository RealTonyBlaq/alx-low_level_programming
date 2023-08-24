#include "shell.h"

/**
 * read_line - Reads chars from stdin using getline
 * @ac: Argument count
 * @argv: Argument vectors
 *
 * Return: A pointer to an array string.
 */

char *read_line(int ac, char **argv)
{
	char *getline_buffer = NULL;
	size_t getline_buffer_size = 0;
	ssize_t num_of_char_read;

	if (ac == 2)
	{
		if ((getline_buffer = read_text(argv[1])) == NULL)
		{
			num_of_char_read = -1;
		}
	}
	else
	{
		num_of_char_read = getline(&getline_buffer, &getline_buffer_size, stdin);
	}
	/*handle ctrl+D*/
	if (num_of_char_read == -1)
	{
		free(getline_buffer);
		return (NULL);
	}
	/*check if getline function store the command read from stdin*/
	if (getline_buffer == NULL)
	{
		perror("Unable to read command");
		exit(errno);
	}
	return (getline_buffer);
}

/**
 * read_textfile - Reads text from a file
 * @filename: The name of the file
 * @text: Where to save the text
 *
 * Return: A string pointer, otherwise NULL
 */
/*
char *read_textfile(char **filename, char *text)
{
	char *text_copy = NULL;
	int fd, len;
	ssize_t rret;

	fd = open(filename[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Can't open file");
		return (NULL);
	}
	text_copy = malloc(1024);
	if (text_copy == NULL)
	{
		close(fd);
		return (NULL);
	}
	rret = read(fd, text_copy, 1024);
	if (rret == -1)
	{
		perror("Can't read file");
		free(text_copy);
		close(fd);
		return (NULL);
	}
	len = _strlen(text_copy);
	free(text_copy);
	close(fd);
	text = malloc(sizeof(char) * (len + 2));
	if (text == NULL)
	{
		perror("malloc failed");
		return (NULL);
	}
	_strcpy(text, text_copy);
	return (text);
}*/

char *read_text(const char *filename)
{
	FILE *file = fopen(filename, "r");
	long fileSize;
	char *text;
	size_t bytesRead;

	if (file == NULL)
	{
		perror("Error opening file");
		return (NULL);
	}
	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);

	text = (char *)malloc(fileSize + 1);
	if (text == NULL)
	{
		perror("Memory allocation failed");
		fclose(file);
		return (NULL);
	}
	bytesRead = fread(text, 1, fileSize, file);
	if (bytesRead != (size_t)fileSize)
	{
		perror("Error reading file");
		fclose(file);
		free(text);
		return (NULL);
	}
	text[fileSize] = '\0';
	fclose(file);
	return (text);
}
