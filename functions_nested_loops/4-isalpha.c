#include "main.h"

/**
 * _isalpha - checks the alphabets characters.
 * @c: the charcter to be checked
 *
 * Return: 1 if alphabet character or 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
