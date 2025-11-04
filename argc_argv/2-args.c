#include <stdio.h>

/**
 * main-main
 * @argc: nbr arg
 * @argv: lst arg
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
