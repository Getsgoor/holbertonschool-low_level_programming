#include "main.h"

/**
 * _isalpha- writes the character c to stdout
 * @c: The character to print
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
