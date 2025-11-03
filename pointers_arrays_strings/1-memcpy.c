#include "main.h"

/**
 * _memcpy- copy
 * @dest: dest
 * @src: src
 * @n: n
 *
 * Return: char*
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (src);
}
