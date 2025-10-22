#include <stdio.h>
#include <unistd.h>

/**
 * main- description main
 * 
 * Return: retourne 0
 */

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(1, &quote, 60);
	return (1);
}