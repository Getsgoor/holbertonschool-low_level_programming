#include "main.h"

/**
 * _strlen_recursion-returns the length of a string
 * @s: the string
 *
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	int taille = -1;
	int i = 0;

	if (s[i] != '\0')
	{
		taille = _strlen_recursion(&s[i + 1]);
	}
	return (taille + 1);
}
