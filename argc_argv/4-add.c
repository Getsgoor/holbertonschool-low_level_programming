#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main-main
 * @argc: nbr arg
 * @argv: lst arg
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int somme = 0;
	int i = 0;
	int cmpt;

	for (cmpt = 1; cmpt < argc; cmpt++)
	{
		i = 0;
		while (argv[cmpt][i])
		{
			if (!(argv[cmpt][i] >= '0'  &&  argv[cmpt][i] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		somme += atoi(argv[cmpt]);

	}
	printf("%d\n", somme);

	return (0);
}
