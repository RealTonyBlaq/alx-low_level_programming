#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 *@n: integer to be checked
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (0);
}
