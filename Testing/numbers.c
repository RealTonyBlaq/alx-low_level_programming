#include "main.h"

/**
 * list_numbers - listing numbers
 *
 * Return: nothing
 */

void list_numbers(void)
{
	int a;

	for (a = 0; a <= 15; a++)
	{
		_putchar(a + '0');
		if (a != 15)
		{
			_putchar(',');
		}
	}
	_putchar('\n');
}
