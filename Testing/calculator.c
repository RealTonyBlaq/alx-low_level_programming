#include <stdio.h>

int main(void)
{
	double first_number, second_number, result;
	char operator;

	printf("Enter the first number:\n");
	scanf("%lf", &first_number);
	printf("Choose operator (+ - * /): ");
	scanf(" %c", &operator);
	printf("Enter the second number:\n");
	scanf("%lf", &second_number);

	switch (operator)
	{
		case '+':
			result = first_number + second_number;
			break;
		case '-':
			result = first_number - second_number;
			break;
		case '*':
			result = first_number * second_number;
			break;
		case '/':
			if (second_number == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result = first_number / second_number;
				break;
			}
		default:
			printf("Wrong operator entered\n");
			return (1);
	}
	printf("%lf %c %lf = %lf\n", first_number, operator, second_number, result);
	return (0);
}
