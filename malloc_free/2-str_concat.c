#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatene deux chaines avec malloc
 * @s1: premere chaine
 * @s2: deuxieme chaine
 *
 * Return: the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *newStr;
	unsigned long int i = 0, j = 0, k;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	newStr = malloc(i + j + 1);
	if (newStr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		newStr[k] = s1[k];
	}
	for (k = 0; k <= j; k++)
	{
		newStr[i + k] = s2[k];
	}

	return (newStr);
}
