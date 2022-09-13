#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: A program that prints the alphabet in lowercase except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'e' && low != 'q')
		{
			putchar(low);
		}
	}
	putchar('\n');
	return (0);
}
