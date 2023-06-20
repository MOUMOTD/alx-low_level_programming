#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character to be printed
 * Return: 1 (Success)
 * on error, return -1, and set errno 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
