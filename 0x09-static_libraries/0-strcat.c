#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination of the concatenation
 * @src: The string that will be appended
 *
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
