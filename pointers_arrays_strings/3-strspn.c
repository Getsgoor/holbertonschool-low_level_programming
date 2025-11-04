#include "main.h"

/**
 * _strspn-compte c
 * @s: string a tester
 * @accept: caracteres à tester
 *
 * Return: compte
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int compte = 0;
	int i = 0;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				compte++;
				break;
			}
		}
		if (accept[i] == '\0')
		{
			return (compte);
		}
	}
	return (compte);
}
