#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Program to print combination
 * of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k;

	for (k = 1; k < 100; k++)
	{
		putchar(k + '0');
		if (k < 10)
		{
			putchar('0');
		}
		else if ((k < 10 || k > 11) && (k < 20 || k > 22) && (k < 30 || k > 33)
			&& (k < 40 || k > 44) && (k < 50 || k > 55) && (k < 60 || k > 66)
			&& (k < 70 || k > 77) && (k < 80 || k > 88) && (k < 90 || k > 99))
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
