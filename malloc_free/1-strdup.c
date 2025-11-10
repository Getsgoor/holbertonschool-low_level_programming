#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup-copy a string to a new allocated space n memory
 * @str: the string to copy
 *
 * Return: a poiinter to the string
 */

char *_strdup(char *str)
{
	char *newstr;
	unsigned long int i = 0, size;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	size = i + 1;

	newstr = malloc(size);
	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		newstr[i] = str[i];
	}

	return (newstr);
}
