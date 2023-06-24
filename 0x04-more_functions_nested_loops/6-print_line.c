#include "main.h"

/**
 * print_line - Function to print a line
 *@n: size of the line
 * Return: Nothing
 */

void print_line(int n)
{
	int k;

	while (n <= 0)
	{
		_putchar('\n');
		n--;
	}
	for (k = 0; k < n; k++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
