#include "main.h"

/**
 * print_sign - func check imput sign.
 * @n: the input to check.
 *
 * Return: 1 if +, 0 if zero, -1 if -.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);

}
