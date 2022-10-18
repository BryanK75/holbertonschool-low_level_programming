#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of each numbers
 * @n: Integer
 *
 * Return: Integer (Success)
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n-1));
}
