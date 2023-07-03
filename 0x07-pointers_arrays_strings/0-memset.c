#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the array
 * @b: Characters to be filled
 * @n: Number of times
 *
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
	return (0);
}
