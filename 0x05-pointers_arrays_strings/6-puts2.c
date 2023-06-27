#include "main.h"

/**
 * puts2 - Prints even distribution
 * @str: string to be printed
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0')
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
