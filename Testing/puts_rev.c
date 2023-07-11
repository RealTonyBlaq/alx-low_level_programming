#include "main.h"

/**
 * _print_rev_recursion - prints strings in reverse, recursively
 * @s: The string
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	_print_rev_recursion("\nColton Walker");
	return (0);
}
