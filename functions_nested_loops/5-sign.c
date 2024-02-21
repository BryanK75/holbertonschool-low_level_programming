#include "main.h"
#include <stdio.h>
/**
 * print_sign - returns 1 if n > 0, returns 0 if n = 0 otherwise return -1.
 *
 * n : int
 *
 * Return: int
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
