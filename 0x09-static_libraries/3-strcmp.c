#include "main.h"

/**
 * _strcmp - Function compares two strings
 * @s1: First string pointer
 * @s2: Second string pointer
 *
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
