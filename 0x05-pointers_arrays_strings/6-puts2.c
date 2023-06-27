#include "main.h"

/**
 * puts2 - Prints even distribution
 * @str: string to be printed
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	long int k;

	k = 0;
	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k += 2;
	}
	_putchar('\n');
}
