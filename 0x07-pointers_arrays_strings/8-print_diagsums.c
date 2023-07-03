#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function to sum up main diagonals
 * of an 2D array or matrix
 * @a: The 2D array
 * @size: Size of the 2D array
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	i = 0;
	while (i < size) /*number repetitions*/
	{
		/*sums for diagsums*/
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + size - i - 1);

		i++;
	}

	printf("%i, %i\n", sum1, sum2);

}
