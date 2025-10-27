#include "main.h"
#include "2-strlen.c"

/**
 * print_rev- prints a string
 * @s: fdze
 *
 * Return: void
 */

void print_rev(char *s)
{
	int taille = _strlen(s);

	while (taille >= 0)
	{
		_putchar(s[taille]);
		taille--;
	}
	_putchar('\n');
}
