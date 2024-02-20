#include <stdio.h>
/**
 * main - Prints all single digit from 0 to 9 with only putchar.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	{
		for (n = 48; n < 58; n++)
		{
			putchar(n);
		}
		putchar('\n');
		return (0);
	}
}
