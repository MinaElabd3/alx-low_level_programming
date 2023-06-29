#include "main.h"

/**
 * *string_toupper -  a function that changes all lowercase letters of a string to uppercase letters.
 *
 * @str: String to be returned
 *
 * Return: String
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
