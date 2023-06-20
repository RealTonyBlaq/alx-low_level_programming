#include "main.h"

/**
 * print_alphabet_x10 - Declaring a function that
 * prints alphas x10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	c = 'a';
	i = 0;

	for (; i < 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
