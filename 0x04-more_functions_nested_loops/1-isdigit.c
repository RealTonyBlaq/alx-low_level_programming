#include "main.h"

/**
 * _isdigit - Checks for numbers
 * @c: number to be checked
 *
 * Return: 1 if true, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
