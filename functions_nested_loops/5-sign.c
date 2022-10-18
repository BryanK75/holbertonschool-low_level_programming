#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: The number to be checked
 *
 * Return: 1 if the number is positive, -1 if the number is negative, else is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	else
	{
		_putchar(45);
		return (-1);
	}
}
