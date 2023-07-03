#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The String to be checked
 * @c: The character to be located
 *
 * Return: Always 0, or "NULL" if otherwise
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (s);
}
