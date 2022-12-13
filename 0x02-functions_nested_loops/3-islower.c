#include "main.h"
/**
 * _islower - returns 1 if c is lowercase, 0 otherwise
 * @c: integer to be tested
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
