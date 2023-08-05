#include "main.h"
#include <stdlib.h>

/**
 * mul - Function multiplies two arguments
 * @argc: Argument count
 * @argv: Argument vector
 * @num1: First number
 * @num2: Second number
 *
 * Return: Always 0
 */

int mul(int *argc, char **argv, unsigned int num1, unsigned int num2)
{
	void *ptr;
	int i, j;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					_putchar('E');
					_putchar('r');
					_putchar('r');
					_putchar('o');
					_putchar('r');
					_putchar('\n');
					exit(98);
				}
			}
			ptr =
