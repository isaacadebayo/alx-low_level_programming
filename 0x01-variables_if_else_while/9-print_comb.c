#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main  - Entry point
* Return: always 0 success
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar('0' + n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
