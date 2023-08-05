#include "3-calc.h"
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds two integers
 * @a: Second integer
 * @b: Second integer
 *
 * Return: Always 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: Second integer
 * @b: Second integer
 *
 * Return: Always 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: Second integer
 * @b: Second integer
 *
 * Return: Always 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: Second integer
 * @b: Second integer
 *
 * Return: Always 0
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of division
 * of two integers a and b
 * @a: Second integer
 * @b: Second integer
 *
 * Return: Always 0
 */

int op_mod(int a, int b)
{
	return (a % b);
}
