#include <stdio.h>

/**
 * main - Entry point
 * main - Prints all alĥabet in lower
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z';  c++)
	if (c != 'e' && c != 'q')
	putchar(c);

	putchar('\n');
	return (0);
}
