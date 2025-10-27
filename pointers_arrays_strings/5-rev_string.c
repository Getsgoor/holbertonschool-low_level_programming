#include "main.h"
#include "2-strlen.c"

/**
 * rev_string- prints a string
 * @s: fdze
 *
 * Return: void
 */

void rev_string(char *s)
{
	int taille = _strlen(s);
	int i;

	for (i = 0; i < taille / 2; i++)
	{
		char temp = s[i];

		s[i] = s[taille - i - 1];
		s[taille - i - 1] = temp;
	}
}
