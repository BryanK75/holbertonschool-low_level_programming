#include <stdio.h>
/**
 * main - Prints the alphabet backwards.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";
	{
		for (n = 26; n >= 0; n--)
		{
			putchar (abc[n]);
		}
		putchar ('\n');
		return (0);
	}
}
