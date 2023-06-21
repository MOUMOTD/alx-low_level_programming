#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int fibonacci[NUM_FIBONACCI];

	int i;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < NUM_FIBONACCI; i++)
	{
	fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	for (i = 0; i < NUM_FIBONACCI; i++)
	{
	printf("%d", fibonacci[i]);
	if (i < NUM_FIBONACCI - 1)
	{
	printf(", ");
	}
	}
	printf("\n");
	return (0);
}
