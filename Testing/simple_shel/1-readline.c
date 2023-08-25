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
	char *getline_buffer = NULL, *buf_copy = NULL;
	size_t getline_buffer_size = 0;
	ssize_t num_of_char_read;

	if (ac == 2)
	{
		getline_buffer = read_text(argv);
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

char *read_text(char **argv)
{
	FILE *stream;
	char *line = NULL;
	size_t len = 0, i = 0;
	ssize_t nread;

	stream = fopen(argv[1], "r");
	if (stream == NULL)
	{
		perror("can't open file");
		exit(EXIT_FAILURE);
	}
	nread = getline(&line, &len, stream);
	if (nread == -1)
	{
		perror("unable to read file\n");
		fclose(stream);
		free(line);
		exit(EXIT_FAILURE);
	}
	fclose(stream);
	return (line);
}
