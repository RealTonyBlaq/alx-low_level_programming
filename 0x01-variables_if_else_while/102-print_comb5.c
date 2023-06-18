#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Program to print two two-digit
 * combination of numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			/* Print tens digit of first number */
			putchar('0' + (i / 10));
			/* Print ones digit of first number */
			putchar('0' + (i % 10));
			putchar(' ');
			/* Print tens digit of second number */
			putchar('0' + (j / 10));
			/* Print ones digit of second number */
			putchar('0' + (j % 10));
			putchar(',');
			/* Print a space after each combination */
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
