#include "main.h"

/**
 * print_triangle - Printing triangles
 * @size: Size of the triangle
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int space;
	int hash;
	int line;

	if (size > 0)
	{
		for (line = 1; line <= size; line++)
		{
			for (space = 1; space <= size - line; space++)
			{
				_putchar(32);
			}
			for (hash = 1; hash <= line; hash++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
