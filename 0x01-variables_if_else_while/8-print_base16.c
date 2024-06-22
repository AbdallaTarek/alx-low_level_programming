#include <stdio.h>

/**
 * main - Prints all hexadecimal numbers in lowercase followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex_digit;

	/* Print digits '0' to '9' */
	for (hex_digit = '0'; hex_digit <= '9'; hex_digit++)
	{
		putchar(hex_digit);
	}

	/* Print letters 'a' to 'f' */
	for (hex_digit = 'a'; hex_digit <= 'f'; hex_digit++)
	{
		putchar(hex_digit);
	}

	putchar('\n'); /* Print a newline */

	return (0); /* Return success */
}
