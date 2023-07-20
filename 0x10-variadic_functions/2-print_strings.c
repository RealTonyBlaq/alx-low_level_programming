#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Function prints strings
 * @separator: Char to be printed after int
 * @n: Size of char parameters
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list var;
	char *str;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(var, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if ((i != n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(var);
	printf("\n");
}
