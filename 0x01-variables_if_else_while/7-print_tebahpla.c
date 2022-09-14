#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Prints alphabets in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 'z'; n <= 'a'; n--)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}
