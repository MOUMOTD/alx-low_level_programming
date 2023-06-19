#include <stdib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print lowercase and uppercase
 * Return: always 0 (Success)
 */

int main(void)
{
	char m = 'a';

	while (m <= 'z')
	{
		putchar(m);
		m++;
	}
	m = 'A';
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
