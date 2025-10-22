#include "main.h"

/**
 * jack_bauer- writes the character c to stdout
 * @void: The character to print
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int min1;
	int min2;
	int hour1;
	int hour2;

	for (hour2 = '0'; hour2 <= '2'; hour2++)
	{
		for (hour1 = '0'; hour1 < '9'; hour1++)
		{
			for (min2 = '0'; min2 <= '6'; min2++)
			{
				for (min1 = '0'; min1 <= '9'; min1++)
				{
					while (hour2 <= 2 && hour1 <= 3)
					{
						_putchar(hour2);
						_putchar(hour1);
						_putchar(':');
						_putchar(min2);
						_putchar(min1);
					}
					_putchar('\n');
				}
			}
		}
	}
}
