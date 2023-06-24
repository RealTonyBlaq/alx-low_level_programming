#include "main.h"

/**
 * more_numbers - Printing more numbers than usual
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int i, k;
	int l = 10, m = 15;

	for (i = 0; i < l; i++)
	{
		for (k = 0; k < m; k++)
		{
			_putchar(k + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
