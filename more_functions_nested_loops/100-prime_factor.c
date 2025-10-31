#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main- prints prime factor
 *
 * Return: void
 */

int main(void)
{
	long unsigned int i = 2;
	long unsigned int n = 612852475143;

	while (i <= sqrt(n))
	{
		if (n % i == 0)
			n /= i;
		else
			i++;
	}
	printf("%lu\n", n);

	return (0);
}
