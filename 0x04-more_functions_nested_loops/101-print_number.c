#include "main.h"

/**
 * print_number - Prints integers
 * @n: Integer to be printed
 *
 * Return: Nothing
 */

void print_number(int n)
{
	int reversed, digit;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	reversed = 0;
	while (n > 0)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	if (reversed == 0)
	{
		_putchar('0');
		return;
	}
	while (reversed > 0)
	{
		digit = reversed % 10;
		_putchar('0' + digit);
		reversed /= 10;
	}
}
