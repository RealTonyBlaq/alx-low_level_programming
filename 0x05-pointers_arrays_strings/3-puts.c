#include "main.h"

/**
 * _puts - Prints the string
 * @str: Character to be printed
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int string = *str;

	_putchar(string);
	_putchar('\n');
}
