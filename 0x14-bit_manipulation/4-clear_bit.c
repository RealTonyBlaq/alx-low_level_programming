#include "main.h"

/**
 * clear_bit - Sets a bit to 0 at index
 * @n: The bit
 * @index: The index, starting from 0
 *
 * Return: 1 on success, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
