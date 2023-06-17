#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Printing hexadecimals
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f;

	for (f = 0; f <= 9; f++)
	{
		putchar(f + '0');
	}
	for (f = 'a'; f <= 'f'; f++)
	{
		putchar(f);
	}
	putchar('\n');

	return (0);
}
