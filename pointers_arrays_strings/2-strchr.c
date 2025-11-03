#include "main.h"

/**
 * _strchr-df
 * @s:s
 * @c:c
 *
 * Return: ptr
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
