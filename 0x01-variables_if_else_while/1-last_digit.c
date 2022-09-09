#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main  - Entry point
* Return: always 0 success
*/

int main(void)
{
	int n;
	int temp = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	temp = n % 10;
	if (temp > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, temp);
	if (temp == 0)
		printf("Last digit of %d is %d and is zero\n", n, temp);
	if (temp < 6 && temp != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, temp);
	return (0);
}
