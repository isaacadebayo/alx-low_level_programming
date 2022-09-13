#include "main.h"

/**
 *print_alphabet -  a function that prints the alphabet
 *Return: the program returns 0
 */

void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
