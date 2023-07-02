#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string pointer
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int length, i;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	i = length - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
