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
	int i = 0, j;

	for (; s[i] >= '\0'; i++)
	{
		j = 0;
		for (; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
