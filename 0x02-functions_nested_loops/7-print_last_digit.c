#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: number to print the last digit from
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar('0' + (n % 10));
	}
	else if (n == 0)
	{
		_putchar(48);
	}
	else
	{
		_putchar('0' + (-n % 10));
	}
	return (0);
}
