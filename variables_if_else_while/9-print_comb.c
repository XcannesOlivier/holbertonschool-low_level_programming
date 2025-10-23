#include <stdio.h>

/**
 * main - Entry point
 * Prints all single-digit numbers separated by comma and space
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);

	if (n != '9')  /* Si ce n’est pas le dernier chiffre */
	{
	putchar(',');
	putchar(' ');
	}
	}

	putchar('\n'); /* retour à la ligne à la fin */
	return (0);
}

