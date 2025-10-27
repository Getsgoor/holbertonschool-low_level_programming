#include "main.h"
#include "2-strlen.c"

/**
 * puts_half- prints a string
 * @str: fdze
 *
 * Return: void
 */

void puts_half(char *str)
{
	int taille = _strlen(str);
	int i;

	if (taille % 2 == 0)
		i = taille / 2;
	else
		i = (taille + 1) / 2;

	while (i < taille)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
