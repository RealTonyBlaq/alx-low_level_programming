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
	int fd_value1, fd_value2, n_bytes, ret1, ret2, end_of_file = 1;
	char text[BYTES];

	fd_value1 = open(file_from, O_RDONLY);
	if (fd_value1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_value2 = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_value2 < 0)
	{
		close(fd_value1);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while (end_of_file)
	{
		end_of_file = read(fd_value1, text, BYTES);
		if (end_of_file < 0)
		{
			close(fd_value1);
			close(fd_value2);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		else if (end_of_file == 0)
			break;
		n_bytes = write(fd_value2, text, end_of_file);
		if (n_bytes < 0)
		{
			close(fd_value1);
			close(fd_value2);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	ret1 = close(fd_value1);
	ret2 = close(fd_value2);
	if (ret1 < 0 || ret2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ret1 < 0 ? ret1 : ret2);
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (0);
}
