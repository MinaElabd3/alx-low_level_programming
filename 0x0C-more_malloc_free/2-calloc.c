#include <stdlib.h>
#include "main.h"

/**
 * *_memset - a function that allocates memory for an array, using malloc.
 * @s: memory area to be filled
 * @b: char to be copied
 * @n: number of times to copy b
 *
 * Return: pointer
 */

	void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < nmemb * size; i++)
	ptr[i] = 0;

	return (ptr);

}
