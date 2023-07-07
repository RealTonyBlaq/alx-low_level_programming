#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: The String to be checked
 * @c: The character to be located
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
