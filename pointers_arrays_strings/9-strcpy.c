#include "main.h"

/**
 * _strcpy- copy a string by his pointer
 * @dest: an empty string
 * @src: the string to copy
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int taille = 0;
	int i;

	while (src[taille] != '\0')
	{
		taille++;
	}

	for (i = 0; i <= taille; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
