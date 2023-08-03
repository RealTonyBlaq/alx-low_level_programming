#include "main.h"

/**
 * binary_to_uint - Function converts a binary
 * to an unsigned integer
 * @b: A pointer to a string of 0's and 1's
 *
 * Return: The converted number if successful,
 * else the function returns 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int dec = 0, i, k;

	if (b == NULL)
		return (0);
	i = _strlen(b) - 1;
	k = 0;
	while (i >= 0)
	{
		if (b[k] != '0' && b[k] != '1')
		{
			return (0);
		}
		dec += ((b[k] - '0') * (power(2, i)));
		k++;
		i--;
	}
	return (dec);
}

/**
 * _strlen - Function gets the length of a string
 * @str: The string
 *
 * Return: The length
 */

int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * power - Simple function raises a number to a power
 * @base: The base
 * @exponent: The exponent
 *
 * Return: The result
 */

int power(int base, int exponent)
{
	int result = 1;

	while (exponent > 0)
	{
		if (exponent & 1)
		{
			result *= base;
		}
		base *= base;
		exponent >>= 1;
	}
	return (result);
}
