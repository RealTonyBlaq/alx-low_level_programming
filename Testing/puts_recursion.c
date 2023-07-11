#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: String to be printed
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

#include "main.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}
