#include "main.h"
#include "5-sqrt_recursion.c"

/**
 * _prime- search for prime
 * @n: n
 * @i: a possible divisor
 *
 * Return: if it is prime
 */

int _prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i > _sqrt_recursion(n))
	{
		return (1);
	}
	return (_prime(n, i + 2));
}


/**
 * is_prime_number-tell if a number is a prime number
 * @n:the number
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (_prime(n, 3));
}