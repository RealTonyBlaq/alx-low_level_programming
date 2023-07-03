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
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[0])
		{
			return (i);
		}
	}
	return (0);
}
