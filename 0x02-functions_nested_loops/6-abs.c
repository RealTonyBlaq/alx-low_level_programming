#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 *@n: integer to be checked
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}
	a = n;
	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
