#include "main.h"

/**
 * _strstr - Function locates a substring
 * @haystack: String to be checked
 * @needle: Second string
 *
 * Return: Always 0 or "NULL" if otherwise.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;
		while (needle[i] != '\0')
		{
			if (*haystack == needle[i])
			{
				return (&needle[i]);
			}
			i++;
		}
		haystack++;
	}
	return (0);
}
