#include "main.h"
#include <stdio.h>

/**
 * print_array - Printing arrays
 * @a: The array
 * @n: The number of values in the array
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
