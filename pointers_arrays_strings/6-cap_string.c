#include "main.h"
#include <stdbool.h>

/**
 * cap_string- capitalize all words
 * @str: the string
 *
 * Return: the string
 */

char *cap_string(char *str)
{
	bool nouveauMot = true;

	for (; *str != '\0'; str++)
	{
		if (*str == 44  ||  *str == 59 || *str == ' '  || *str == '\n'  ||
		*str == '\t'  ||  *str == 63  ||  *str == 46  ||  *str == 33  ||
		*str == 34  ||  *str == 40  ||  *str == 41  ||  *str == 123  ||
		*str == 125)
		{
			nouveauMot = true;
		}
		if ((nouveauMot  &&  *str >= 65  &&  *str <= 90)  ||
		(*str <= '9'  &&  *str >= '0'))
		{
			nouveauMot = false;
		}
		if (nouveauMot  &&  *str >= 97  &&  *str <= 122)
		{
			*str -= 32;
			nouveauMot = false;
		}
	}
	return (str);
}
