#include "main.h"

/**
 * _islower- writes the character c to stdout
 * @c: The character to print
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
