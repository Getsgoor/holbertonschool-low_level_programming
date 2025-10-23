#include "main.h"
#include <stdio.h>
/**
 * print_times_table- writes the character c to stdout
 * @n: The character to print
 *
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int a;
	int b;

	printf("0");
	for (a = 0; a < n; a++)
		printf(",   0");
	printf("\n");
	for (a = 1; a <= n; a++)
	{
		printf("0");
		for (b = 1; b <= n; b++)
		{
			printf(",%4.d", a * b);
		}
		printf("\n");
	}
}