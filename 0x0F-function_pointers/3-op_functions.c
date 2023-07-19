#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers
 * @a: first number.
 * @b: second number.
 *
 * Return: The result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division
 * @a: first number.
 * @b: second number.
 *
 * Return: The remainder of the division
 */

int op_mod(int a, int b)
{
	return (a % b);
}

