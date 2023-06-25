#include <stdio.h>

/**
 * main - Entry point
 * Program adds up fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int next;
	int total;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			total = total + a;
		}
		next = a + b;
		a = b;
		b = next;
	}
	printf("%d\n", total);
	return (0);
}
