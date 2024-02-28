#include "main.h"
/**
 * _puts - prints a string
 *
 * @str : string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int compte;
	int i;

	while (*(str + compte) != '\0')
	{
		compte++;
	}
	for (i = 0; i < compte; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
