#include "main.h"

/**
 * _strcmp- comparees two strings
 * @s1: 1er string
 * @s2: 2eme string
 * 
 * Return: compare
 */

 int _strcmp(char *s1, char *s2)
 {
	for (;*s1 != '\0'  &&  *s2 != '\0'; s1++, s2++)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	return (0);
	
 }
