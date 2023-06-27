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
	long int *m;

	k = *str;
	*m = k;
	while (*m != '\0')
	{
		_putchar(*m);
		m = m + 2;
	}
	_putchar('\n');
}
