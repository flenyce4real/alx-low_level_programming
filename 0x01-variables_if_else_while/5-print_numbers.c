#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (success)
 */

int main(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		printf("%i", x);
	}

	putchar('\n');

	return (0);
}
