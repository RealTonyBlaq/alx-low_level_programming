#include "main.h"

/**
 * get_bit - Gets the value of a bit at a
 * particular index.
 * @n: The bit
 * @index: The index, starting from 0
 *
 * Return: 0 or 1 - Value of the bit at index;
 * otherwise -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}

int main(void)
{
	unsigned int n;

	n = get_bit(8, 63);
	printf("%d\n", n);
	return (0);
}
