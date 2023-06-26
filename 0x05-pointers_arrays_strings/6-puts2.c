#include "main.h"

/**
 * puts2 - Prints even distribution
 * @str: string to be printed
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
