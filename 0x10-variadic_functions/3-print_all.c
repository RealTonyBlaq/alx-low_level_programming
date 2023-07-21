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
	int i;
	const char *c;
	float f;
	int flag = 0;
	va_list var;
	int k;
	char *s;

	va_start(var, format);
	k = 0;
	c = format;
	while (c[k] != '\0')
	{
		switch (c[k])
		{
			case 'c':
				i = va_arg(var, int);
				printf("%c", i);
				flag = 1;
				break;
			case 'i':
				i = va_arg(var, int);
				printf("%d", i);
				flag = 1;
				break;
			case 'f':
				f = (float)va_arg(var, double);
				printf("%f", f);
				flag = 1;
				break;
			case 's':
				s = va_arg(var, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				flag = 1;
				break;
			default:
				break;
		}
		if (c[k + 1] != '\0' && flag)
		{
			printf(", ");
			flag = 0;
		}
		k++;
	}
	va_end(var);
	printf("\n");
}
