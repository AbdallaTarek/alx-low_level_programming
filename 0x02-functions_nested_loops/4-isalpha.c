#include "main.h"

/**
 * _isalpha - check if the char lower or greater than c in lowercase.
 * @c: The chat to be checked
 * Return: return 0 if the char is out of range return 1 if the char is in range .
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
