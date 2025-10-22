#include "main.h"

/**
 * print_last_digit- writes the character c to stdout
 * @n: The character to print
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	_putchar(lastDigit + '0');
}
