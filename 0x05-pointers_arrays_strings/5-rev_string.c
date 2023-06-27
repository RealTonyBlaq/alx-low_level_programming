#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string pointer
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	if (!s)
	return;

	char *start;
	char *end;
	char temp;

	*end = s;
	while (*end != '\0')
	end++;

	end--;

	start = s;
	temp = *start;
	while (start < end)
	{
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
