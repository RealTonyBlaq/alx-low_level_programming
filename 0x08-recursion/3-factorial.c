#include "main.h"

/**
 * factorial -Returns the factorial of a number
 * @n: The number
 *
 * Return: Always 0, -1 if error exists
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
