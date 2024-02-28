#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s : character
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int compte = 0;
	int i;

	while (s[compte] != '\0')
	{
		compte++;
	}
	for (i = compte - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
