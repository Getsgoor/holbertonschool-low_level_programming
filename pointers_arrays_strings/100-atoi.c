#include "main.h"
#include <stdbool.h>
#include <limits.h>
#include <stdio.h>
/**
 * _atoi- convert a string to int
 * @s: the string to convert
 *
 * Return: an int
 */

int _atoi(char *s)
{
	bool positif = true;
	int retour = 0, i = 0;

	while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			positif = !positif;
		i++;
	}
	for (; s[i] >= '0' && s[i] <= '9'; i++)
	{
		retour *= 10;
		if (retour == 2147483640  &&  (s[i] - '0' > 7))
			return (INT_MIN);
		retour += s[i] - '0';
	}

	if (!positif)
		retour *= (-1);
	return (retour);
}
