#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The String pointer
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int n;
	int length;
	int even;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		even = length / 2;
		while (even < length)
		{
			_putchar(str[even]);
			even++;
		}
	}
	else if (length % 2 == 1)
	{
		n = (length - 1) / 2;
		while (n < length)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
