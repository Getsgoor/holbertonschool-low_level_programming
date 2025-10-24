#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * print_times_table- prints the n times table
 * @n: The character to print
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, taille, produit;
	bool bonnetaille;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				taille = 1000;
				produit = i * j;

				_putchar(',');
				while (produit < taille)
				{
					if (taille != 1)
						_putchar(' ');
					taille /= 10;
				}
				taille = 100000;
				bonnetaille = false;

				while (taille > 1)
				{
					if (taille <= produit)
						bonnetaille = true;
					if (bonnetaille)
					{
						_putchar((produit / taille) + '0');
						produit %= taille;
					}
					taille /= 10;
				}
				_putchar(produit % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
