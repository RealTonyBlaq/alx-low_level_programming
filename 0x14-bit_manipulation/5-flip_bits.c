#include "main.h"

/**
 * flip_bits - Function returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: Bits
 * @m: Bits
 *
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;

	return (count_set_bits(xor_result));
}

/**
 * count_set_bits - Counts bits
 * @num: Bit to be counted
 *
 * Return: The count
 */

unsigned int count_set_bits(unsigned long int num)
{
	unsigned int count = 0;

	while (num)
	{
		num &= (num - 1);
		count++;
	}
	return (count);
}
