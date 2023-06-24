#include "main.h"

/**
 * more_numbers - Printing more numbers than usual
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int i, k;
	int tens;
	int ones;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			tens = k / 10 + '0';
			ones = k % 10 + '0';
			if (k >= 10)
			{
				_putchar(tens);
			}
			_putchar(ones);
		}
		_putchar('\n');
	}
}
