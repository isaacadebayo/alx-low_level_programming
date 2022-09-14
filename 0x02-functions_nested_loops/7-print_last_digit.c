#include "main.h"

/**
 *print_last_digit - a function that prints the last digit of a number.
 *@n: input character to the function
 *Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int retval;

	if (n >= 0)
		retval = (n % 10);
	if (n < 0)
		retval = (n % 10) * -1;
	_putchar(retval + '0');
	return (retval);
}
