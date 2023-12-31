#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * Return: 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	int i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			diff = ((s1[i] - '\0') - (s2[i] - '\0'));
			break;
		}
		i++;
	}
	return (diff);
}
