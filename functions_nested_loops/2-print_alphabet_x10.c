#include "main.h"

/**
 * print_alphabet_x10- writes the character c to stdout
 * @void: The character to print
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	char n;

	for (i = 0; i < 10; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
	}
}
