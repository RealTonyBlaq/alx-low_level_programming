#include "main.h"

/**
 * swap_int - Program that swaps integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int k = *a;

	*a = *b;
	*b = k;
}
