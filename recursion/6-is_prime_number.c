#include "main.h"
#include <stdio.h>

/**
 * prime - check if int is a prime number
 * @p: Integer
 * @i: Integer
 *
 * Return: Integer (Success)
 */
int prime(int p, int i)
{
	if (p == i)
		return (1);
	if (!(p % i))
		return (0);
	else
		return (prime(p, i + 1));
}

/**
 * is_prime_number - check if int is a prime number
 * @n: Integer
 *
 * Return: integer (Success)
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime(n, 2));
}
