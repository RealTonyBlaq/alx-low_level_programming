#include <stdio.h>

int main(void)
{
	int i, j;
	char *c = "July";
	char *week = "MONTUEWEDTHUFRISATSUN";
	int year = 2023;
	int count = 1;

	printf("%s", c);
	printf(" %d\n\n", year);
	for (i = 0; week[i] != '\0'; count++, i++)
	{
		printf("%c", week[i]);
		if (count % 3 == 0)
		{
			printf("\t");
		}
	}
	printf("\n");
	for (j = 1; j <= 30; j++)
	{
		printf("%d\t", j);
		if (j % 7 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
	return (0);
}
