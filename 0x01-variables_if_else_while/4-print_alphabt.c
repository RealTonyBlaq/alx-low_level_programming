#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Pragram to print all small caps
 * except letters 'q' and 'e'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	if (c != 'q' && c != 'e')
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
