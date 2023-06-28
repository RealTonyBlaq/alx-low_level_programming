#include "main.h"

/**
 * print_diagonal - Print diagonals
 * @n: Numbers of times to print it
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int space;
	int line;

	if (n > 0)
	{
		for (line = 1; line <= n; line++)
		{
			if (line != 1)
			{
				for (space = 1; space <= line - 1; space++)
				{
					_putchar(32);
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
