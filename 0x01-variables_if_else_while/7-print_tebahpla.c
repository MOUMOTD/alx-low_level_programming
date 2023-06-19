#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print alphabet reversed
 *
 * Return: 0
 */

int main(void)
{
	char n = 'z';

	while (n <= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
