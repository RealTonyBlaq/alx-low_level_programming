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
	int i, j;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str2[j] == str1[i])
			{
				count++;
				break;
			}
			j++;
		}

		if (s[i] != accept[j])
		{
			break;
		}

		i++;
	}
	return (count);
}
