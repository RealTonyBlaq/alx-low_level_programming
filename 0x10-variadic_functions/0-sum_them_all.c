#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - Sums up all it's parameters
 * @n: The first agrument
 *
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list var;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(var, int);
	}
	va_end(var);
	return (sum);
}
