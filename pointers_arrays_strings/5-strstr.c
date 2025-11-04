#include "main.h"

/**
 * _strstr- find a substring in a string
 * @haystack: the string we search in
 * @needle: the string we search for
 *
 * Return: the string we search for
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] != '\0' && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i - j);
		}
	}
	return (0);
}
