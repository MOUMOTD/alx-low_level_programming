#include <stdlib.h>
#include <time.h>
/**
 * main - write a digit
 * Return: Always return 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d\n", n, n % 10);
return (0);
}
