#include <stdio.h>

/**
 * main - Entry point
 * Program adds up fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int n = 31;
	long int a = 2;
	long int b = 4;
	long int next;
	int i;

	printf("%ld", a);
	for (i = 2; i < n; i++)
	{
		if (b % 2 == 0)
		{
			printf(", %ld", b);
			if (next <= 4000000)
			{
				next = a + b;
				a = b;
				b = next;
			}
		}
	}
	printf("\n");
	return (0);
}
