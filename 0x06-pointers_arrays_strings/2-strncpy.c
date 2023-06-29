#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *
 * @dest: copy src string to it
 *
 * @src:  contains content to be copied
 *
 * @n: Number of bytes of src that should be copied to dest
 *
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		*(dest + i) = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
