#include "main.h"
/**
 * _print_rev_recursion - Write a function that prints a string in reverse.
 * @s: string parameter to be reversed
 * Return: nothung
 */

void _print_rev_recursion(char *s)
{
	static int count;
	static int reverse;

	if ((*s != '\0') && (reverse == 0))
	{
		count++;
		_print_rev_recursion(s + 1);
	}
	else
	{
		if (count >= 0)
		{
			reverse = 1;
			count--;
			_putchar(*s);
			_print_rev_recursion(s - 1);
		}
		else
			return;
	}
}
