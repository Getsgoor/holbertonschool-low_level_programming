#include "main.h"

/**
 * _strncpy- ezf
 * @dest: dest
 * @src: source
 * @n: ez
 *
 * Return: une coppie
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int taille = 0;

	while (src[taille] != '\0')
		taille++;

	for (i = 0; i < n && i <= taille; i++)
	{
		dest[i] = src[i];
	}
	while (taille < n)
	{
		dest[taille] = '\0';
		taille++;
	}

	return (dest);
}
