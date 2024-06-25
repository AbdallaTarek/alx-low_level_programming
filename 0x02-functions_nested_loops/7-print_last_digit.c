#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a numbers
 * @n: is the input to check
 *
 * Description: prints the last digit of a numbers
 * Return: Returnlast number of input
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
