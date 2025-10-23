#include <stdio.h>

/**
 * main- description main
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c, d;
	int n1, n2;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					n1 = a * 10 + b;
					n2 = c * 10 + d;

					if (n1 < n2)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(' ');
						putchar(c + '0');
						putchar(d + '0');
						if (!(a == 9 && b == 8 && c == 9 && d == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
