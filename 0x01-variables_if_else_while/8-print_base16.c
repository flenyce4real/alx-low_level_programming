#include <stdio.h>

/**
 * main - prints hexadecimal base 0123456789abcdef with putchar
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = '0';
	int alpha = 'a';

	while (n <= '9') /* print 0 - 9 */
	{
		putchar(n);
		n++;
	}

	while (alpha <= 'f') /* print a - f */
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
