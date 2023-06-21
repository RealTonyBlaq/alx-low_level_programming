#include "main.h"

/**
 * print_sign - prints signs given a numeric value
 * @n: number to be checked
 *
 * Return: 1 if positive, 0 if zero, "-1" if negative
 */

int print_sign(int n)
{
	n = print_sign(n);
	if (n > 0)
	{
		_putchar('+' + '0');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-' + '0');
		return (0);
	}
	else
	{
		_putchar(0 + '0');
		return (-1);
	}
}
