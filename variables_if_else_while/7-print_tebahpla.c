#include <stdio.h>
/**
 * main - Prints the alphabet backwards.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	{
		for (n = 122; n > 96; n--)
		{
			putchar (n);
		}
		putchar ('\n');
		return (0);
	}
}
