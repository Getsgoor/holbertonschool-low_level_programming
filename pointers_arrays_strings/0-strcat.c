#include "main.h"
#include "2-strlen.c"

/**
 * _strcat- concatenates two string
 * @dest: the string to return
 * @src: the string to concatenatel
 *
 * Return: rger
 */

char *_strcat(char *dest, char *src)
{
	int tailleDest = _strlen(dest);
	int tailleSrc = _strlen(src);
	int i;

	for (i = 0; i < tailleSrc; i++)
	{
		dest[tailleDest + i] = src[i];
	}

	return (dest);
}
