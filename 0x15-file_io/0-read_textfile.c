#include "main.h"

/**
 * read_textfile - Function reads a text file and
 * prints it to stdout
 * @filename: The textfile
 * @letters: Number of letters to be read and printed
 *
 * Return: NUmber of letters read, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *text;
	ssize_t rret, wret;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	text = malloc(letters);
	if (text == NULL)
	{
		close(fd);
		return (0);
	}
	rret = read(fd, text, letters);
	if (rret == -1)
	{
		close(fd);
		return (0);
	}
	wret = write(1, text, rret);
	if (wret == -1 || wret != rret)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (wret);
}
