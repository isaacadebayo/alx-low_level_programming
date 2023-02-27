#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: an input string to search
 * @c: an input character to locate
 * Return: returns pointer
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
