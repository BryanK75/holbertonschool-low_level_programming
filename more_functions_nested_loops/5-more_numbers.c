#include "main.h"
/**
 * more_numbers - a function that print 10 times the number from 0 to 14.
 *
 * Return: Numbers frome 0 to 14 ten times.
 */
void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}

