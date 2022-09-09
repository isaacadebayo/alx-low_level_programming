#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main  - Entry point
* Return: always 0 success
*/

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n == 'e' || n == 'q')
			continue;
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
