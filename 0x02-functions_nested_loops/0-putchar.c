#include "main.h"

/**
 *main - a program that prints _putchar, followed by a new line.
 *
 *Return: the program returns 0
 */

int main(void)
{
	int i;
	char str[] = "_putchar\n";

	for (i = 0; i <= 8; i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
