#include "main.h"

/**
 * _isupper- check for uppercase character
 * @c: the char to test
 *
 * Return: if it is in uppercase or not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
