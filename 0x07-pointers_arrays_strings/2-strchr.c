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
	char *p = s;
	int i;

	i = 0;
	while (p[i] != '\0')
	{
		if (p[i] == c)
		{
			for (p[i] = c; p[i] != '\0'; i++)
			{
				return (p);
			}
			break;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (0);
}
