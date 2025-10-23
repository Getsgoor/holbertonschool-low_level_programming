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
	long int a1 = 0;
	long int a2 = 1;
	long int b1 = 0;
	long int b2 = 2;
	long int c1 = a1 + b1;
	long int c2 = a2 + b2;

	int i;

	printf("1, 2");
	for (i = 2; i < 98; i++)
	{
		printf(", ");
		if (c1 != 0)
			printf("%ld", c1);
		printf("%ld", c2);

		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
		c2 = ((a2 + b2) % 10000000000000);
		c1 = ((a1 + b1) % 10000000000000) + ((a2 + b2) / 10000000000000);
	}
	printf("\n");
}

