#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup-copy a string to a new allocated space n memory
 * @str: the string to copy
 *
 * Return: a poiinter to the string
 */

char *_strdup(char *str)
{
	char *newstr;
	int i, size;

	size = strlen(str) + 1;
	newstr = malloc(size);

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		newstr[i] = str[i];
	}

	return (newstr);
}
