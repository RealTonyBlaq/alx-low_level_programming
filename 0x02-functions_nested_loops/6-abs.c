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
		_putchar(-n + '0');
	}
	else if (n == 0)
	{
		_putchar(48);
	}
	else
	{
		_putchar(n + '0');
	}
	return (0);
}



