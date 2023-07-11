#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */

void modif_my_char_var(char *cc, char ccc)  
{
	*cc = 'o';
	ccc = 'l';
	printf("value of ccc before: %c\n", ccc);
	printf("Address of ccc before: %p\n", &ccc);
	printf("Value of cc before: %p\n", cc);
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("Value of c before: %c\n", c);
	printf("Address of c before: %p\n", &c);
	printf("Value of p before change: %p\n", p);
	modif_my_char_var(p, c);
	printf("Value of p after: %p\n", p);
	printf("Address of c after: %p\n", &c);
	printf("Value of c after: %c\n", c);
	return (0);
}
