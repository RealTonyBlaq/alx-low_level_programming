#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Finds powers
 * @x: Number to be raised to power
 * @y: The power
 *
 * Return: Always 0, -1 if otherwise
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
