#include "main.h"

/**
 * *_strcat - function concatenate srtings
 * @str: param pointer to the string to get length
 * @dest: param pointer to destination string
 * @src: param pointer to source string
 * Return: return value of dest
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

char *_strcat(char *dest, char *src)
{
	int deslen = 0;
	int srclen = 0;
	int i = 0;

	deslen = _strlen(dest);
	srclen = _strlen(src);
	for (i = 0; i < srclen; i++)
		dest[deslen + i] = src[i];
	dest[_strlen(dest)] = '\0';
	return (dest);
}
