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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	L = n % 10;
	printf("Last digit of %d is %d ", n, L);
	if (L > 5)
		printf("and is greater than 5\n");
	if (L < 6 && L != 0)
		printf("and is less than 6 and not 0\n");
	if (L == 0)
		printf("and is 0\n");
	return (0);
}
