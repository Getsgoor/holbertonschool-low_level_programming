#include "main.h"

/**
 * string_toupper- changes all lowercase letters of a string to uppercase
 * @str: the string to convert
 *
 * Return: ptr
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	for (; *str != '\0'; str++)
	{
		if (*str  >= 'a'  &&  *str <= 'z')
			*str -= 32;
	}

	return (ptr);
}
