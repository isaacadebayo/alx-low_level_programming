#include "main.h"
/**
 * _puts_recursion - Write a function that prints a string,
 * followed by a new line.
 * @s: string parameter to be printed
 * Return: nothing (0)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
