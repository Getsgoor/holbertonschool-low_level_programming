#include "main.h"

/**
 * print_square- affcihe un carre
 * @size: taille du cote
 *
 * Return: void
 */

void print_square(int size)
{
	int ligne, colonne;

	if (size <= 0)
		_putchar('\n');
	for (ligne = 0; ligne < size; ligne++)
	{
		for (colonne = 0; colonne < size; colonne++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
