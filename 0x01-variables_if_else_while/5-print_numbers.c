#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: A program that prints all single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%i", n);
	}
	printf("\n");
	return (0);
}
