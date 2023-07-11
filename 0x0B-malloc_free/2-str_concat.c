#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function concatenates two strings
 * @s1: The destination string
 * @s2: The source string
 *
 * Return: Always 0
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int len1, len2, i, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	ptr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (k = 0; k <= len2; i++, k++)
	{
		ptr[i] = s2[k];
	}
	return (ptr);
}
