#include <stdio.h>

/**
 * main - Entry point
 * Program adds up fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int n = 50;
	long long int a = 1;
	long long int b = 2;
	long long int next;
	int i;

	printf("%lld", a);
	for (i = 2; i <= n; i++)
	{
		printf(", %lld", b);
		next = a + b;
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
