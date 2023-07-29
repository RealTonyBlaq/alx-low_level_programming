#include "lists.h"
#include <stdarg.h>

char message(void) __attribute__((constructor));

/**
 * message - Entry point
 * Description: Function prints a string before another main
 * function is executed
 *
 * Return: Always 0 (Success)
 */

char message(void)
{
	printf("You're beat! and yet, ");
	printf("you must allow,\n");
	printf("I bore my house upon my back!\n");
	return (0);
}
