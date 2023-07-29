#include <stdio.h>

/**
 * print_double - Prints double digits from 0 to n
 * @n: The last number
 *
 * Return: Always 0
 */

int print_double(int n)
{
	if (n < 0 || n > 99)
	{
		return (0);
	}
	print_double(n - 1);
	if (n >= 0 && n < 10)
	{
		printf("0%d ", n);
	}
	else
	{
		printf("%d ", n);
	}
}

void main()
{
	int number;

	printf("Want to print double digits from 0 to a number less than 100?\n");
	printf("Enter the number: ");
	scanf("%d", &number);
	print_double(number);
	printf("\n");
}
