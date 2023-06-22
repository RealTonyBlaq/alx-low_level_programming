#include "main.h"

/**
 * jack_bauer - printing time
 *Description: Program to print every minute of the day
 * Return: Nothing
 */

void jack_bauer(void)
{
	int h, m;
	{
		for (h = 0; h <= 23; h++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			for (m = 0; m <= 59; m++)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
				_putchar('\n');
				if ((h == 23) && (m == 59))
				{
				_putchar('\n');
				}
			}
		}
	}
}
