#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char myChar = 0;
	int myInt = 0;
	long int myLInt = 0;
	long long int myLlInt = 0;
	float myFloat = 0;

	printf("Size of a char: %d byte(s)\n", sizeof(myChar));
	printf("Size of a int: %d byte(s)\n", sizeof(myInt));
	printf("Size of a long int: %d byte(s)\n", sizeof(myLInt));
	printf("Size of a long long int: %d byte(s)\n", sizeof(myLlInt));
	printf("Size of a float: %d byte(s)\n", sizeof(myFloat));
	return (0);
}
