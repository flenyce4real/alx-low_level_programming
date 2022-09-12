#include <stdio.h>

/**
 * main - print hexadecimal numbers with putchar
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = '0';
	int alpha = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
