#include "main.h"

/**
 * _isdigit- checks for a digit
 * @c: the char to check
 *
 * Return: 1 for a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
