#include "main.h"

/**
 * _isalpha - Checks for aplha characters
 * @c: char to be checked
 *
 * Return: 1 if true, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
