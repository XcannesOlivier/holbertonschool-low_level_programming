#include <stdio.h>

/**
 * main - Entry point
 * Prints all single digit numbers of base 16
 * Return: Always 0
 */
int main(void)
{
	int n;

    /* chiffres 0 à 9 */
	for (n = 0; n < 10; n++)
	putchar(n + '0');

    /* lettres a à f */
	for (n = 'a'; n <= 'f'; n++)
	putchar(n);

	putchar('\n');
	return (0);
}

