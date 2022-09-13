#include "main.h"

/**
 *_isalpha - a function that checks for alphabetic character.
 *@c : input character to the function
 *Return: the program returns 1 if c is a letter, lowercase or uppercase
 *returns 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}