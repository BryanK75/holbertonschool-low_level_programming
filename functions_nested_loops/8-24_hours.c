#include "main.h"
/**
 * jack_bauer - Prints all the minutes of the day.
 *
 * Returns: O
 */
void jack_bauer(void)
{
	int h1, h2, min1, min2; 

	for (h1 = 48; h1 <= 50; h1++)
	{
		for (h2 = 48; h2 <= 51; h2++)
		{
			for (min1 = 48; min1 <= 53; min1++)
			{
				for (min2 = 48; min2 <= 57; min2++)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(58);
					_putchar(min1);
					_putchar(min2);
					_putchar('\n');
					if (h1 == 50 && h2 == 51 && min1 == 53 && min2 == 57)
						return;
				}
			}
		}
	}
}
