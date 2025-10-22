#include <stdio.h>
#include <unistd.h>

/**
 * main- description main
 *
 * Return: retourne 0
 */

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, &quo, 60);
	return (1);
}
