#include "main.h"

/**
 * print_alphabet - testing the void declaration
 * Header by me
 * Program: printing lowercase alphabets
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
