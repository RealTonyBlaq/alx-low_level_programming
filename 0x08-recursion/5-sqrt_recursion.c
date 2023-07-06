#include "main.h"

int _squareroot(int n, int k);

/**
 * _sqrt_recursion - Returns squareroot of a num recursively
 * @n: The number
 *
 * Return: Always 0, -1 if error exists
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_squareroot(n, 0));
}

/**
 * _squareroot - Gets the actual square root
 * @n: The number
 * @k: The number whose square is the squareroot
 *
 * Return: Always 0, -1 if error exists
 */

int _squareroot(int n, int k)
{
	if (k * k > n)
	{
		return (-1);
	}
	if (k * k == n)
	{
		return (k);
	}
	return (_squareroot(n, k + 1));
}
