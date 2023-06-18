#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Dscription: Program that prints the
 * combination of two two-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int j, k, l, m;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 10; k++)
		{
			putchar(' ');
		}
			for (l = 0; l < 10; l++)
			{
				for (m = 0; m < 10; m++)
				{
					putchar('0' + j);
					putchar(k + '0');
					putchar('0' + l);
					putchar(m + '0');
					if ((j != k || l != m) && (k != m || j != l))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		if (j == 9 && k == 8 && l == 9 && m == 9)
		{
			putchar('\n');
		}
	}
	return (0);
}
