#include "main.h"

/**
 *print_alphabet_x10 - a function that prints the alphabet
 *Return: the program returns 0
 */

void print_alphabet_x10(void)
{
	int i = 'a';
	int j = 0;

	for (j = 0; j <= 9; j++)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
			_putchar('\n');
		}
	}
}
