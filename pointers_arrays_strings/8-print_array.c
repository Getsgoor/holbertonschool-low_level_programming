#include "main.h"
#include <stdio.h>

/**
 * print_array- prints n element of an array
 * @a: the array
 * @n: the number of int to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
		printf("%d", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	putchar('\n');
}
