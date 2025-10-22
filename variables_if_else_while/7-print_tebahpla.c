#include <stdio.h>

/**
 * main - Entry point
 * main - Prints all alĥabet in lower
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a';  c--)
	putchar(c);

	putchar('\n');
	return (0);
}
