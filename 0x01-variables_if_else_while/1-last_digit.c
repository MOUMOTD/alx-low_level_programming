#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry a digits
 * Return: Always return 0 (Seccess)
 */

int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (n > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, m);
	else if (n == 0)
		printf("last digit of %d is %d and is 0\n", n, m);
	else if (n < 6 && m != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, m)
	return (0);
}
