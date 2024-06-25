#include "main.h"

/**
 * int _abs - func to return abs of numbers
 * @c: is the input to check
 *
 * Description: func to return abs of numbers
 * Return: Absolute value of num or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_num
			;
		abs_num = -1 * c;
		return (abs_num);
	}
	return (c);
}
