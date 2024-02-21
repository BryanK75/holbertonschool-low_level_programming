#include "main.h"
/**
 * times_table - Prints the 9 times tables.
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int i;
	int n;
	int res;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');

			res = i * n;

			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
