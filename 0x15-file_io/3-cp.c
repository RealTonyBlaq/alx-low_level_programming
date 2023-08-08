#include "main.h"
#define BYTES 1024

/**
 * cp - Copies texts from a file to another
 * @file_from: File where the text is copied from
 * @file_to: File where the text is copied to
 *
 * Return: Nothing
 */

void cp(const char *file_from, const char *file_to)
{
	int fd_value, n_bytes, ret1, ret2;
	char *text;

	fd_value = open(file_from, O_RDONLY);
	if ((fd_value < 0) || !file_from)
	{
		close(fd_value);
		perror("Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	text = malloc(BYTES);
	n_bytes = read(fd_value, text, BYTES);
	if (n_bytes < 0)
	{
		free(text);
		close(fd_value);
		perror("Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	ret1 = close(fd_value);
	fd_value = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	n_bytes = write(fd_value, text, n_bytes);
	if (n_bytes < 0 || fd_value < 0)
	{
		free(text);
		close(fd_value);
		perror("Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	ret2 = close(fd_value);
	if (ret1 == -1 || ret2 == -1)
	{
		free(text);
		perror("Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		cp(*(argv + 1), *(argv + 2));
	}
	else
	{
		perror("Usage: cp file_from file_to\n");
		exit(97);
	}
	return (0);
}
