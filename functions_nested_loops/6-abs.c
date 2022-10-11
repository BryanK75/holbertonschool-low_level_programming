#include "main.h"

/**
 * _abs - prints the number without the sign
 * @c: character to be checked
 *
 * Return: Absolute number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}
	return (c);
}
