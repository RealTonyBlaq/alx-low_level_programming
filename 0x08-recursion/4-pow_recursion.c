#include "main.h"

/**
 * _pow_recursion - Perfoms power functions recursively
 * @x: The base
 * @y: The power
 *
 * Return: Always 0, -1 if error exists
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0 || x == 1)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
