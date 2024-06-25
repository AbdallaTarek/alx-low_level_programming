#include "main.h"

/**
 * print_alphabet_x10 - the code print a-z 10X.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
