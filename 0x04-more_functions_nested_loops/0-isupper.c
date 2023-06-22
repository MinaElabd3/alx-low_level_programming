#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 *
 * @c: input for alphabet
 *
 * Return: 1 if it's uppercase or 0 if it's not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

