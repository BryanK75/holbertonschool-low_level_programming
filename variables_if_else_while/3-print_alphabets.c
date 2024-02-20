#include <stdio.h>

/**
 * main - Prints the alphabet in lower case and in upper case.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	char abc[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	{
		for (n = 0; n < 52; n++)
		{
			putchar(abc[n]);
		}
		putchar('\n');
		return (0);
	}
}
