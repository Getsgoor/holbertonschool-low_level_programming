#include "main.h"
#include "2-strlen.c"

/**
 * _strncat- concatenates two string
 * @dest: the string to return
 * @src: the string to concatenatel
 * @n: the size
 *
 * Return: rger
 */

char *_strncat(char *dest, char *src, int n)
{
	int tailleDest = _strlen(dest);
	int tailleSrc = _strlen(src);
	int i;

	for (i = 0; i < n  &&  i < tailleSrc; i++)
	{
		dest[tailleDest + i] = src[i];
	}

	return (dest);
}
