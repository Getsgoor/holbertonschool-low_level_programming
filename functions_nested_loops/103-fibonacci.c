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
	long int somme = 0;

	while (c < 4000000)
	{
		a = b;
		b = c;
		c = a + b;
		if (c % 2 == 0)
			somme += c;
	}
	printf("%ld\n", somme);
}
