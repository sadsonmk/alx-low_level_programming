#include <stdio.h>
#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two numbers
 * @a: the first input number
 * @b: the second input number
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts teo numbers
 * @a: the first input number
 * @b: the second input number
 * Return: the difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: the first input number
 * @b: the second input number
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: the first input number
 * @b: the second input number
 * Return: the quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of dividing two numbers
 * @a: the first input number
 * @b: the second input number
 * Return: the remainder of a divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
