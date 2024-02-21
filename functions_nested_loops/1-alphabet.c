#include "main.h"
#include<stdio.h>
/**
 * main - Prints the alphabet followed by a new line
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;
	/*char c[26] = "abcdefghijklmnopqrstuvwxyz";*/
	{
		for (i = 96; i < 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
