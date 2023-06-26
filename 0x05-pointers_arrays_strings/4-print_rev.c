#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse, followed by a new line.
 * @s: string
 *
 */
void printReverseString(const char* str) {
    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
}
