#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be treated
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}
