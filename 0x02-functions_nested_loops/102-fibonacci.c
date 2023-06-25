#include <stdio.h>

/**
 * main - Entry point
 * Program adds up fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int n = 50;
	int a = 1;
	int b = 2;
	int next;

	printf("%d", a);
	for (int i = 2; i <= n; i++)
	{
		printf(", %d", b);
		next = a + b;
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
