#include "main.h"
#include "main.c"
#include <stdio.h>
/**
 * natural- writes the character c to stdout
 * @void: The character to print
 *
 *
 * Return: Always 0.
 */

void natural(void)
{
	int n = 0, somme = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0  ||  n % 5 == 0)
			somme += n;
	}
	printf("%d\n", somme);
}
