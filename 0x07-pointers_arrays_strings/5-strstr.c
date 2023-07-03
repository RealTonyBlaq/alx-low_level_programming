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

	while (*needle != '\0')
	{
		i = 0;
		while (haystack[i] != '\0')
		{
			if (*needle == haystack[i])
			{
				return (needle);
			}
			i++;
		}
		needle++;
	}
	return (0);
}
