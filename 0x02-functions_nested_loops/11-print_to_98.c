#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - printing numbers
 * @n: Starting point of the numbers
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	int end = 98;
	int start;

	if (n != 98)
	{
		for (start = n; start <= end; start++)
		{
			printf("%d", start);
			if (start != end)
			{
				printf(", ");
			}
		}
		for (start = n; start >= end; start--)
		{
			printf("%d", start);
			if (start != end)
			{
				printf(", ");
			}
		}
	}
	else
	{
		printf("%d", end);
	}
	printf("\n");
}
