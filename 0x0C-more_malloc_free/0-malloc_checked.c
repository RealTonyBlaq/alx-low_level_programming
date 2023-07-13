#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function allocates memory
 * @b: The integer
 *
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
