#include "main.h"
#include "main.c"
#include <stdio.h>

/**
 * fibonacci- writes the character c to stdout
 * @void: The character to print
 *
 *
 * Return: Always 0.
 */


void fibonacci(void)
{
	long int a = 1;
	long int b = 2;
	long int c = a + b;
	int i;

	printf("1, 2");
	for (i = 2; i < 50; i++)
	{
		printf(", %ld", c);
		a = b;
		b = c;
		c = a + b;
	}
	printf("\n");
}
