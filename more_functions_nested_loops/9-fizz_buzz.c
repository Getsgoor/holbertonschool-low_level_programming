#include <stdio.h>
/**
 * main - description pour main
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nombre;

	printf("1");
	for (nombre = 2; nombre < 101; nombre++)
	{
		printf(" ");
		if (nombre % 3 == 0 && nombre % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (nombre % 3 == 0)
		{
			printf("Fizz");
		}
		else if (nombre % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", nombre);
	}
	printf("\n");
	return (0);
}
