#include "main.h"
/**
 * print_numbers - A function that prints numbers from 0 to 9.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
		_putchar(n);
	_putchar('\n');
}
