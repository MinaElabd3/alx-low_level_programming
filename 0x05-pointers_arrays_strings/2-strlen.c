#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: string
 * Return: string's length
 */

int _strlen(char *s)
{
	int counter;
	for (counter = 0; *s !='\0', s++);
		++counter;

	return (counter);
}

