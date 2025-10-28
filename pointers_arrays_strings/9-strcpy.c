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
	int i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
