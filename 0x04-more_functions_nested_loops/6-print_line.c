#include "main.h"

/**
 * print_line - Function to print a line
 *@n: size of the line
 * Return: Nothing
 */

void print_line(int n)
{
	int k;

	if (n > 0)
	{
		for (k = 1; k <= n; k++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
