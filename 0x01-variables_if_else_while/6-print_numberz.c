#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description - printing all numbers using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		putchar(k + '0');
	}
	putchar('\n');

	return (0);
}
