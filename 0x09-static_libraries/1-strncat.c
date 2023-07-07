#include "main.h"

/**
 * _strncat - Function concatenates strings
 * considering n bytes
 * @dest: The destination of the concatenation
 * @src: The pointer to be appended
 * @n: Number of bytes
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	*p = '\0';
	return (dest);
}
