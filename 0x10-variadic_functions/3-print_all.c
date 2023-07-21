#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>

/**
 * print_all - Function prints anything
 * @format: Contains list of types of arguments
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	const char *ptr = format;
	float f;
	va_list var;
	char *s;
	int i, k = 0;

	va_start(var, format);
	while (ptr[k] != '\0')
	{
		switch (ptr[k])
		{
			case 'c':
				printf("%c", i = va_arg(var, int));
				break;
			case 'i':
				printf("%d", i = va_arg(var, int));
				break;
			case 'f':
				printf("%f", f = (float)va_arg(var, double));
				break;
			case 's':
				s = va_arg(var, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				break;
		}
		if (ptr[k + 1] != '\0')
		{
			printf(", ");
		}
		k++;
	}
	va_end(var);
	printf("\n");
}
