#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes
 *
 * Return: pointer to the resulting string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
size_t s1_len = strlen(s1);
if (n >= strlen(s2))
{
n = strlen(s2);
}
char *new_string = malloc(s1_len + n + 1);

memcpy(new_string, s1, s1_len);

memcpy(new_string + s1_len, s2, n);

new_string[s1_len + n] = '\0';

return (new_string);
}

