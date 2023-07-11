#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a duplicate of the string
 * @str: The string
 *
 * Return: Always 0
 */

char *_strdup(char *str)
{
	int length;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	ptr = malloc(sizeof(char) * length + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		*ptr = *str;
		ptr++;
		str++;
	}
	*ptr = '\0';
	return (ptr);
}
