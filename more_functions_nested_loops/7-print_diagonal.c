#include "main.h"

/**
 * print_diagonal- prints a diagonal
 * @n: n times of lines
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int nbEspace;
	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (nbEspace = 0; nbEspace < i; nbEspace++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
