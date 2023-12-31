#include "main.h"
/**
 * _strncpy - C function that copies a string.
 * @dest: destination
 * @src: source
 * @n:max nummber of byte copied
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
