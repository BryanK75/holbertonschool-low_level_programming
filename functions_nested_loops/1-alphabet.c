#include "main.h"
#include<stdio.h>
/**
 * print_alphabet - Prints the alphabet followed by a new line
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;
	/*char c[26] = "abcdefghijklmnopqrstuvwxyz";*/
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
