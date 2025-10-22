#include "main.h"

/**
 * print_alphabet- writes the character c to stdout
 * @void: The character to print
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
