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

		k = 0;
		while (k < n)
		{
			_putchar(95);
			k++;
		}
		n--;
	}
	_putchar('\n');
}
