#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  prints the alphabet without q and e
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q');
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
