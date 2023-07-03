#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Locates any bytes in a string
 * @s: The string to be checked
 * @accept: The source string
 *
 * Return: Always 0, "NULL" if otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (0);
}
