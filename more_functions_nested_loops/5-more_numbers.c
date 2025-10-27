#include "main.h"

/**
 * more_numbers- multiplies to integers
 *
 *
 * Return: ten times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int i;
	int j;
	int rep;

	for (rep = 0; rep < 10; rep++)
	{
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i <= 9; i++)
			{
				if (j && i < 5)
					_putchar(j + '0');
				if (!j  || i < 5)
				_putchar(i + '0');
			}
		}
		_putchar('\n');
	}
}
