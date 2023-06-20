#include "main.h"

/**
 * print_alphabet_x10 - do alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char b;
	int a = 0;

	while (a <= 9)
	{
	for (b = 'a'; b <= 'z'; b++)
	{
	_putchar(b);
	}
	_putchar('\n');
	a++;
	}
}
