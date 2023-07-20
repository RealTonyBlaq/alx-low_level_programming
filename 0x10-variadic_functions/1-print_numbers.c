#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers from parameters
 * @separator: Char to be printed after an int
 * @n: Number of integers passed to the function
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list var;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(var, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
