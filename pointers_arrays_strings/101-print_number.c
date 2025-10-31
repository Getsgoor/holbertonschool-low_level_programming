#include "main.h"
#include <stdio.h>
/**
 * print_number- prints an integer
 * @n: fz
 *
 * return: void
 */

void print_number(int n)
{
	unsigned int taille = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else if (n == 0)
		_putchar('0');
	while (n / taille != 0)
	{
		taille *= 10;
	}
	taille /= 10;
	printf("%d\n", taille);

	while (taille > 0)
	{
		_putchar(((n / taille) % 10) + '0');
		taille /= 10;
	}
}
