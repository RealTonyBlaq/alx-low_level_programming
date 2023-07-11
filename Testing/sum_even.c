#include <stdio.h>

unsigned int sum_even(unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (n + sum_even(n - 2));
}

int main(void)
{
	long int n, sum;
	int i;
	
	printf("Enter an even number\n");
	scanf("%ld", &n);
	if (n % 2 == 0)
	{
		sum = sum_even(n);
		printf("sum of even numbers from %ld to 0 is: %ld\n", n, sum);
	}
	else
	{
		printf("You have 2 trials left\n");
		for (i = 1; i >= 0; i--)
		{
			printf("Enter an even number\n");
			scanf("%ld", &n); 
			if (n % 2 == 1)
			{
				printf("You have %d trial left\n", i);
				if (i == 0)
				{
					printf("Trial ended...\n");
				}
			}
			else
			{
				sum = sum_even(n);
				printf("Sum of even numbers from %ld to 0 is: %ld\n", n, sum);
				break;
			}
		}
	}				
	return (0);
}
