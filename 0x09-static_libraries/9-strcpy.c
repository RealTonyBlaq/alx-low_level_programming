#include "main.h"

/**
 * _strcpy - Copies Strings
 * @dest: The destination
 * @src: The source to be copied
 *
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
	return (0);
}
