#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Program to print a combination
 * of three-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int j, k, l;

	for (j = 0; j < 10; j++)
	{
		for (k = j + 1; k < 10; k++)
		{
			for (l = k + 1; l < 10; l++)
			{
				putchar('0' + j);
				putchar(k + '0');
				putchar(l + '0');
				if (j != 7 || k != 8 || l != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			if (j == 7 && k == 8 && l == 9)
			putchar('\n');
		}
	}
	return (0);
}
