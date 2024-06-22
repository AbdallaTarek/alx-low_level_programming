#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
		if (letter == 'q' || letter == 'e')
		{
			letter += 1;
		}
		else
		{
			putchar(letter);
			letter += 1;
		}
	putchar('\n');
	return (0);
}