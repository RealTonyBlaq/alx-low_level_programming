#include "main.h"

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Always 0 (success)
 */

int mul(int a, int b)
{
	int k;

	if ((a <= 0 && a >= 0) && (b <= 0 && b >= 0))
	{
		k = a * b;
		_putchar(k + '0');
	}
	return (0);
}
