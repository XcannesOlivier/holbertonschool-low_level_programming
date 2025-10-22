#include <stdio.h>

/**
 * main - Entry point
 * main - Prints all single digit number
 * Return: Always 0
 */

int main(void)
{
	int  n;

	for (n = '0'; n <= '9'; n++)
	putchar(n + '0' );

	for (n = 'a'; n <= 'f'; n++)
	putchar(n);

	putchar('\n'); 
	return (0);
}
