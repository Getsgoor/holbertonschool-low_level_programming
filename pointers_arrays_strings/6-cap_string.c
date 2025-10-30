#include "main.h"

/**
 * cap_string- capitalize all words
 * @str: the string
 *
 * Return: the string
 */

char *cap_string(char *str)
{
	char separators[] = " \t\n,;.!?\"(){}";
	char *ret = str;

	if (*str >= 97  &&  *str <= 122)
	{
		*str -= 32;
	}

	while (*str++ != '\0')
	{
		int i = 0;

		while (separators[i] != '\0')
		{
			if (*str == separators[i]  &&  *(str + 1) >= 'a'  &&  *(str + 1) <= 'z')
			{
				*(str + 1) -= 32;
				break;
			}
			i++;
		}
	}
	return (ret);
}
