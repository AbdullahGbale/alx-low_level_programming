#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 *  add - functions that adds numbers
 *  @a: first number
 *  @b: second number
 *  Return: returns the sum of two numbers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - functions that subtracts numbers
 * @a: first number
 * @b: second number
 * Return: returns the subtraction value of two numbers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - functions that multiplies numbers
 * @a: first number
 * @b: second number
 * Return: returns the mulitplication value of two numbers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - functions that divides numbers
 * @a: first number
 * @b: second number
 * Return: returns the quotient of dividend and divisor
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - functions that finds the remainder
 * @a: first number
 * @b: second number
 * Return: returns the remainder of dividend and divisor
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
