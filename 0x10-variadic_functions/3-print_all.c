#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - Function prints anything
 * @format: Contains list of types of arguments
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	float f;
	va_list var;
	char *s;
	int i, k = 0;

	va_start(var, format);
	while (format[k] != '\0' && format != NULL)
	{
		switch (format[k])
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
		}
		if ((format[k] == 'c' || format[k] == 'i' || format[k] == 'f'
					|| format[k] == 's') && format[k + 1] != '\0')
		{
			printf(", ");
		}
		k++;
	}
	printf("\n");
	va_end(var);
}
