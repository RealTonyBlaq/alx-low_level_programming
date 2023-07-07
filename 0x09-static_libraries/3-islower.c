#include "main.h"

/**
 * _islower - checks for lowercase alphas
 *@c: character to be checked
 * Return: 1 if true, otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
