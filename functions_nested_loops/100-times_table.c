#include "main.h"
#include <stdio.h>
/**
 * print_times_table- writes the character c to stdout
 * @n: The character to print
 *
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int a = 0;
	int b = 0;
	int somme = 0;
	int miroir = 0;

	_putchar('0');
	for (a = 1; a <= n; a++)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar('0');
	}
	_putchar('\n');
	for (a = 1; a <= n; a++)
	{
		_putchar('0');
		for (b = 1; b <= n; b++)
		{
			somme = a * b;
			miroir = 1;

			_putchar(',');
			if (somme / 1000 == 0)
				_putchar(' ');
			if (somme / 100 == 0)
				_putchar(' ');
			if (somme / 10 == 0)
				_putchar(' ');

			while (somme != 0)
			{
				miroir = miroir * 10 + somme % 10;
				somme /= 10;
			}
			while (miroir / 10 != 0)
			{
				_putchar((miroir % 10) + '0');
				miroir /= 10;
			}
		}
		_putchar('\n');
	}
}