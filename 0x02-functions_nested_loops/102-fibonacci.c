#include <stdio.h>

/**
 * main - Entry point
 * Program adds up fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int n = 50;
	long int a = 1;
	long int b = 2;
	long int next;
	int i;

	printf("%ld", a);
	for (i = 2; i <= n; i++)
	{
		printf(", %ld", b);
		next = a + b;
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
