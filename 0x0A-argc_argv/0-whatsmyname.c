#include <stdio.h>

/**
 * main - Function prints a file's name
 * @argc: The argument counter
 * @argv: The argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
