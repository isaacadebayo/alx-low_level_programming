#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main  - Entry point
* Return: always 0 success
*/

int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	n = 'a';

	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
