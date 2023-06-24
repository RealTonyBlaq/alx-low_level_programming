#include "main.h"

/**
 * more_numbers - Printing more numbers than usual
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int i, k;

	for (i = 0; i <= 10; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			_putchar(k + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
