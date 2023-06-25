#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 *@n: integer to be checked
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	int tens;
	int ones;

	if (n < 0)
	{
		n = -n;
	}
	tens = n / 10 + '0';
	ones = n % 10 + '0';
	if (n >= 10)
	{
		_putchar(tens);
	}
	_putchar(ones);
	return (0);
}
