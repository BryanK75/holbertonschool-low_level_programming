#include "main.h"
/**
 * _strstr - function that locates a substring
 *
 * @haystack: character
 * @needle: character
 *
 * Return: character
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *n = needle;
		char *h = haystack;

		while (*h && *n && *h == *n)
		{
			n++;
			h++;
		}
		if (!*n)
			return (haystack);
		haystack++;
	}
	return ('\0');
}
