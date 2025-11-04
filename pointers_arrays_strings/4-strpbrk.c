#include "main.h"

/**
 * _strpbrk-searches a string for any type of bytes
 * @s:string to search
 * @accept: bytes to check
 *
 * Return:the pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		for (i = 0 ; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return (s);
}
