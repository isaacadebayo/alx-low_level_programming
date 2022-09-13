#include "main.h"

/**
 *print_sign -  Write a function that prints the sign of a number.
 *@n: input character to the function
 *Returns 1 and prints + if n is greater than zero
 *Returns 0 and prints 0 if n is zero
 *Returns -1 and prints - if n is less than zero
 *Return: -1, 0, 1
 */

int print_sign(int n)
{	int retval;
	if (n > 0)
	{
		_putchar('+');
		retval = 1;
	}
	if (n ==  0)
	{
		_putchar('0');
		retval = 0;
	}
	if (n <  0)
	{
		_putchar('-');
		retval = -1;
	}
	return (retval);
}
