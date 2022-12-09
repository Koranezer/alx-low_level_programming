#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *
 * it is positive, negative, or zero.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, L;

	L = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (L > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, L);
	if (L < 6 && L != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, L);
	if (L == 0)
		printf("Last digit of %d is %d and is 0\n", n, L);
	return (0);
}
