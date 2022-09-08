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

	printf("Size of a char: %d\n", sizeof(myChar));
	printf("Size of a int: %d\n", sizeof(myInt));
	printf("Size of a long int: %d\n", sizeof(myLInt));
	printf("Size of a long long int: %d\n", sizeof(myLlInt));
	printf("Size of a float: %d\n", sizeof(myFloat));
	return (0);
}
