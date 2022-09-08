#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	return (1);
}
