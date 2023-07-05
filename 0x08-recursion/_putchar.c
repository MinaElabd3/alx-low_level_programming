#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c
 *
 * @c: the character to get printed
 *
 * Return: 1 when success, -1 when error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
