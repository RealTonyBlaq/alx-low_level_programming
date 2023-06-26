#include "main.h"

/**
 * _strlen - Program returns the length of a string
 * @s: The pointer
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
	return (0);
}
