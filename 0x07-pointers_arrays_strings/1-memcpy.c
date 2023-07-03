#include "main.h"

/**
 * _memcpy - Copies n bytes from memory
 * @dest: The destination
 * @src: The source
 * @n: Number of bytes to copy
 *
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p = dest;

	i = 0;
	while (i < n)
	{
		p[i] = src[i];
		p++;
		i++;
	}
	return (p);
	return (0);
}

