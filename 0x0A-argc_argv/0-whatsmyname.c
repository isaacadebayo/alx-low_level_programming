#include "main.h"
/**
 * main - Write a program that prints its name, followed by a new line.
 *
 * Return: zero (0), success
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	do
	{
		_putchar(*argv[0]);
	}
	while (*argv[0]++); 
	_putchar('\n');
	return (0);
}
