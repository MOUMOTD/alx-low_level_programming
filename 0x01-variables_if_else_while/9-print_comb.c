#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print comb
 *
 * Return: 0
 */

int main(void)
{
	int b = '0';

	while (b <= '9')
	{
		putchar(b);
		if (b != '9')
		{
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	putchar('\n');
	return (0);
}
