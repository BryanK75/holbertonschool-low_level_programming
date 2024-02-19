#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";
	{
		for (n = 0; n < 26; n++)
		{
			putchar(abc[n]);
		}
		putchar('\n');
		return (0);
	}
}
