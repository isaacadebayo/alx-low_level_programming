#include "main.h"
/**
 * _memset - The _memset() function fills the first n bytes of
 * the memory area pointed to by s with the constant byte b
 * @s: memory area to be filled
 * @b: constant byte used for filling the memory area
 * @n: number of bytes to be filled in the memory area
 *
 * Return:  a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
