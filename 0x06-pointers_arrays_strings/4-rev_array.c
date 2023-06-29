#include "main.h"

/**
 * reverse_array - Reverses the contents of an array
 * @a: Pointer to the array
 * @n: Size of the array
 *
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
