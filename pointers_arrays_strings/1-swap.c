#include "main.h"

/**
 * swap_int- swap the values of two int
 * @a:s
 * @b:d
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int intermed = *a;
	*a = *b;
	*b = intermed;
}
