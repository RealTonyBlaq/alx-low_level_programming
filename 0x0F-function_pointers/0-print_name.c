#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name from input
 * @name: Name to be printed
 * @f: Function pointer to a char
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		name = "";
	}
	f(name);
}
