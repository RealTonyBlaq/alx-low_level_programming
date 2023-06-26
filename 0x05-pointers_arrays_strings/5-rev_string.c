#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string pointer
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int k;
	int i;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	for (i = 0; i < k; k++)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
	for (i = k - 1; i >= 0; i--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
