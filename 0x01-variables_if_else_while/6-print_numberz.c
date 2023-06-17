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
	int k = 0 - 9;
	char c;

	while (k >= 0)
	{
		c = '0' + (k % 10);
		putchar(c);
		c /= 10;
	}
	putchar('\n');

	return (0);
}
