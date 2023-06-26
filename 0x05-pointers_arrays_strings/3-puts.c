#include "main.h"

/**
 * _puts -  a function that returns the length of a string.
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

