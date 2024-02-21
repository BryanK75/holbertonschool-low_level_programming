#include "main.h"
/**
 * int_islower - checks for lowercase characters.
 *
 * Return: int c.
 */
int _islower(int c)
{
	
	{
		if (c >= 'a' && c <= 'z')
			return (1);	
		else
			return (0);
	}
	_putchar('\n');
	return (0);
}

