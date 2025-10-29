#include "main.h"
#include <stdbool.h>
#include <limits.h>

/**
 * _atoi- convert a string to int
 * @s: the string to convert
 *
 * Return: an int
 */

int _atoi(char *s)
{
	int i = 0;
	bool positif = true;
	int retour = 0;

	while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			positif = !positif;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (retour < INT_MAX)
		{
			retour += s[i] - '0';
			retour *= 10;
		}
		i++;
	}
	if (retour < 0)
	{
		if (!positif)
			return (INT_MIN);
		return (INT_MAX);
	}
	if (!positif)
		retour *= (-1);
	return (retour /= 10);
}
