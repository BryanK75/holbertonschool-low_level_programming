#include "main.h"
/**
 * _isdigit - A function that checks for a digit.
 *
 * @c: character.
 *
 * Return: 1 if c is a digit otherwise returns 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
	_putchar('\n');
}
