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


char *string_nconcat(char *s1, char *s2, unsigned int n) {
  // Check if either string is NULL.
  if (s1 == NULL) {
    s1 = "";
  }
  if (s2 == NULL) {
    s2 = "";
  }

  // Calculate the length of the first string.
  size_t s1_len = strlen(s1);

  // Check if n is greater than or equal to the length of s2.
  if (n >= strlen(s2)) {
    n = strlen(s2);
  }

  // Allocate memory for the new string.
  char *new_string = malloc(s1_len + n + 1);

  // Copy the first string into the new string.
  memcpy(new_string, s1, s1_len);

  // Copy the first n bytes of the second string into the new string.
  memcpy(new_string + s1_len, s2, n);

  // Terminate the new string.
  new_string[s1_len + n] = '\0';

  return new_string;
}

