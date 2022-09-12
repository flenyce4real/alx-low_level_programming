#include <stdio.h>

/**
 * main - print 0-9 separated by space and comma
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}

	putchar('\n');

	return (0);
}
