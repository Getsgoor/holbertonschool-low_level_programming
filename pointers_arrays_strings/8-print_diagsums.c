#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- fd
 * @a:d
 * @size:fe
 *
 * Return: void
 *
 */


void print_diagsums(int *a, int size)
{
	int i;
	int somme1 = 0, somme2 = 0;

	for (i = 0; i < size; i++)
	{
		somme1 += a[i * size + i];
		somme2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", somme1, somme2);
}
