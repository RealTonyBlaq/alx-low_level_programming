#include <stdio.h>

/**
 * main - Prints count of arguments
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: Always 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc);
	}
	return (0);
}
