#include <stdio.h>

/**
 * main - print lowercase and uppercase
 * Return: always 0 (Success)
 */

int main(void)
{
	char lowercase = 'a', uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n);
	return (0);
}
