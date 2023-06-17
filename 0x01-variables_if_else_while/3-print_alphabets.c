#include <stdio.h>

/**
 * main - print lowercase and uppercase
 * Return: always 0 (Success)
 */

int main(void)
{
	char lowercase = 'a', uppercase = 'A';

	while (lowercase <= 'z' && uppercase <= 'Z')
	{
		putchar(lowercase++);
		putchar(uppercase++);
	}
	return (0);
}
