#include <stdio.h>

/**
 * main - print sum of all multiples of 3 ,5 up to 1024
 *
 * Return: always (Success)
 */

int main(void)
{
	int i, Z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
		Z += i;
	}
	i++;
	}
	printf("%d\n", Z);
	return (0);
}
