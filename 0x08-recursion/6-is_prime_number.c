#include "main.h"

int prime_check(int n, int k);

/**
 * is_prime_number - Checks for prime numbers recursively
 * @n: Number to be checked
 *
 * Return: 1 if true, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_check(n, n - 1));
}

/**
 * prime_check - Main prime check function
 * @n: Number to be checked
 * @k: Iterative prime checker
 *
 * Return: 1 for true, otherwise 0
 */

int prime_check(int n, int k)
{
	if (k == 1)
	{
		return (1);
	}
	if ((n % k == 0) && (k > 0))
	{
		return (0);
	}
	return (prime_check(n, k - 1));
}
