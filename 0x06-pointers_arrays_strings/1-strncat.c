#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest:  src string is appended to it
 *
 * @src:  gets appended to dest string
 *
 * @n: Number of bytes of src that should be concatenated with dest
 *
 * Return: return  dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n != j)
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
