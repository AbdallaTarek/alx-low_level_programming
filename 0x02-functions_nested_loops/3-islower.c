#include "main.h"

/**
 * _islower - check if the char lower or greater than c in lowercase.
 * @c: The chat to be checked
 * Return: return 0 if lower return 1 if greater .
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
