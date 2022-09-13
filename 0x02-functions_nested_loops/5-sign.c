#include "main.h"

/**
 *_sign -  Write a function that prints the sign of a number.
 *@n: input character to the function
 *Returns 1 and prints + if n is greater than zero
 *Returns 0 and prints 0 if n is zero
 *Returns -1 and prints - if n is less than zero
 *Return: -1, 0, 1
 */

int _sign(int n)
{
	if ((n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n ==  0)
	{
		_putchar('0');
		return (0);
	}
	if (n <  0)
	{
		_putchar('-');
		return (-1);
	}


}
