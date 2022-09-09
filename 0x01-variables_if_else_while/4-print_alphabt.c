#include <stdio.h>

/**
 * main - Print all alphabets except q and e
 * Return: Always 0 (success)
 */

int main(void)
{
	alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
		{
			continue;
		}

		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
