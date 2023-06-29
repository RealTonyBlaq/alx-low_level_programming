#include "main.h"

/**
 * string_toupper - Converts all lowercase to uppercase
 * @str: String pointer to be converted to uppercase
 * Return: Always 0
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
