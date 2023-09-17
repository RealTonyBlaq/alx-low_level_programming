#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: number to print the last digit from
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int d  = n % 10;
	int k = -d;

	if (n >= 0)
		_putchar(d + '0');
	if (n < 0)
		_putchar(k + '0');
	return (0);
}
