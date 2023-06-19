#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print exad
 *
 * Return: 0
 */

int main(void)
{
	char m = '1';
	char n = 'a';

	while (m <= '9')
	{
		putchar(m);
		m++;
	}
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
