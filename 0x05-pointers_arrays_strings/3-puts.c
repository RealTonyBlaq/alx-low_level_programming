#include "main.h"

/**
 * _puts - Prints the string
 * @str: Character to be printed
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
