#include "main.h"
#include <stdio.h>

/**
 * _strspn - Function gets length of a prefix substring
 * @s: The prefix substring
 * @accept: The second string
 *
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, length;

	i = 0;
	length = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == accept[0])
		{
			return (length + 1);
		}
		length++;
		i++;
	}
	return (0);
}
