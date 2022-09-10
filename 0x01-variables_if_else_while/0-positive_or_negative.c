#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - This function outputs whether a number is positive or negative
 *
 * Description - Outputs negative, positive or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
		printf("%d is negative\n", n);

	return (0);
}
