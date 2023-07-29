#include "main.h"

/**
 * conv_bin - Converts numbers from decimal to base two
 * @n: Number to be converted
 *
 * Return: n_bytes
 */

int conv_bin(unsigned int n)
{
	unsigned int k;

	if (n > 0)
	{
		if (n == 0)
		{
			return (1);
		}
		k = n % 2;
		_puts_int(k);
		return (1 + (conv_bin(n / 2)));
	}
}

int main()
{
	int len = 0;

	len = conv_bin(11);
	printf("\n%d\n", len);
	return (0);
}
