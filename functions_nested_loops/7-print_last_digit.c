#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 *
 * Return: Number (Success)
 */
int print_last_digit(int n)
{
	int digit = n % 10;

	if (n < 0)
	{
		digit = (-1) * digit;
	}
	_putchar('0' + digit);
	return (digit);
}
