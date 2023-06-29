#include "main.h"

/**
 * _strncpy - Function copies a source to a
 * destination
 * @dest: The destination pointer
 * @src: The source pointer
 * @n: Number of bytes
 *
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
