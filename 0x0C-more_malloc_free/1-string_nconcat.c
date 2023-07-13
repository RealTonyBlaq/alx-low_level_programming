#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function concatenates two strings
 * @s1: The destination string
 * @s2: The source string
 * @n: Number of char of s2 to append to s1
 *
 * Return: Always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, len1, len2, j;

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
	if (n >= len2)
	{
		n = len2;
	}
	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
	{
		free (ptr);
		return (0);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
