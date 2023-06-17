#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Program to print single-digit
 * combinations
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		putchar(k + '0');
	}
	if (k < 9)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
