#include <stdio.h>

/**
 * main - description pour main
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = '0'; c < '9'; c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
