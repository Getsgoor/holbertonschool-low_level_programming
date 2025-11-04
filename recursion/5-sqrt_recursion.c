#include "main.h"

/**
 * _sqrt-find the square root
 * @n: the number
 * @i: the possible square root
 *
 * Return: the quare root
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}

	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion- return a square root
 * @n: n
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
