#include "main.h"

/**
 * isupper- check for uppercase character
 * @c
 * 
 * Return: if it is in uppercase or not
 */


 int _isupper(int c)
 {
	if (c >= 'A'  &&  c <= 'Z')
	{
		return (1);
	}
	return (0);
 }
