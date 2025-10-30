#include "main.h"

/**
 * leet- encode a string into 1337
 * @str: string
 *
 * Return: string
 */

char *leet(char *str)
{
	char chiffre[] = "4433007711";
	char lettreCible[] = "AaEeOoTtLl";
	int i = 0;

	while (str[i] != '\0')
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			if (str[i] == lettreCible[j])
				str[i] = chiffre[j];
		}
		i++;
	}
	return (str);
}
