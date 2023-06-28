#include "main.h"

/**
 * print_square - Prints a square
 * @size: Size of the square to be printed
 *
 * Return: Nothing
 */

void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (column = 1; column <= size; column++)
		{
			for (row = 1; row <= size; row++)
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
