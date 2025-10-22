#include "main.h"

/**
 * times_table- writes the character c to stdout
 * @void: The character to print
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			int n = i * j;

			_putchar(',');
			_putchar(' ');
			if (n < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}