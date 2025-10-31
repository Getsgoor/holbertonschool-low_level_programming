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
	int i;
	printf("1,");
	for (i = 2; i <6112852475143; i++)
	{
		if (6112852475143 % i == 0)
		{
			printf(" %d\n", i);
		}
	}
	return (0);
}
