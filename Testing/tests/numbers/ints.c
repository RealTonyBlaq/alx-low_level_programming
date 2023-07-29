#include <stdio.h>
#include <stdarg.h>

void my_putchar(char c)
{
	putchar(c);
}

void my_putstr(const char* str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		my_putchar(str[i]);
	}
}

void my_putint(int num)
{
	if (num < 0)
	{
		my_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		my_putint(num / 10);
	}

	my_putchar('0' + num % 10);
}

void my_printf(const char* format, ...)
{
	va_list args;
	va_start(args, format);

	for (int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				break;
			}
			switch (format[i])
			{
				case 'd':
				case 'i':
					my_putint(va_arg(args, int));
					break;
				default:
					my_putchar(format[i]);
			}
		}
		else
		{
			my_putchar(format[i]);
		}
	}
	va_end(args);
}

int main()
{
	my_printf("Hello, %s! This is a number: %d\n", "John", 42);
	my_printf("Another number: %i\n", -123);
	my_printf("% ");
	printf("\n");
/*	printf("%r");*/

	return 0;
}
