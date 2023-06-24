#include "main.h"

/**
 * more_numbers - printing numbers
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int v = 1;

	while (v <= 10)
	{
		int r = 0;

		while (r <= 14)
		{
			if (r >= 10)
			{
				putchar(1 + '0');
			}
			_putchar(r % 10 + '0');
			r++;
		}
		v++;
		_putchar('\n');
	}
}
