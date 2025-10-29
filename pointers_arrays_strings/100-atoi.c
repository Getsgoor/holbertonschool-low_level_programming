#include "main.h"
#include <stdbool.h>

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
		retour += s[i] - '0';
		retour *= 10;
		i++;
	}
	if (!positif)
		retour *= (-1);
	return (retour /= 10);
}

















