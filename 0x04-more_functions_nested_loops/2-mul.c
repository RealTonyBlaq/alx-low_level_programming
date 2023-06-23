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

	if ((a <= 48 && a >= 48) && (b <= 48 && b >= 48))
	{
		k = a * b;
		_putchar(k + '0');
	}
	return (0);
}
