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
		close_files(fd_value1, fd_value2, file_to);
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
			close_files(fd_value1, fd_value2, file_to);
			exit(99);
		}
	}
	ret1 = close_file(fd_value1);
	ret2 = close_file(fd_value2);
	if (ret1 < 0 || ret2 < 0)
	{
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

/**
 * close_file - Function closes a file descriptor
 * @file: The file descriptor
 *
 * Return: The error returned from the close sys call
 */

int close_file(int file)
{
	int error;

	error = close(file);
	if (error < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
	}
	return (error);
}

/**
 * close_files - Function closes two file descriptors at once
 * and prints an error
 * @file1: The first file descriptor
 * @file2: The second file descriptor
 * @file_to: The file_to pointer
 *
 * Return: Nothing
 */

void close_files(int file1, int file2, const char *file_to)
{
	close(file1);
	close(file2);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
}
