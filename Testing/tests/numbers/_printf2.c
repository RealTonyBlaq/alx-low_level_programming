#include "main.h"

/**
 * _printf - My own printf function
 * @format: Contains the format specifiers
 *
 * Return: The _printf count, 0 (success)
 */

int _printf(const char *format, ...)
{
	int printer = 0;
	va_list var;

	if (format == NULL)
		return (-1);
	va_start(var, format);
	while (format && *format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			switch (*format)
			{
				case 'd':
					printer += _putchar(va_arg(var, int));
					break;
				case 'i':
					printer += _puts_string(va_arg(var, char *));
					break;
				default:
					break;
			}
		}
		else
			printer += write(1, format, 1);
		format++;
	}
	va_end(var);
	return (printer);
}
