#include "main.h"
#include <string.h>

/**
 * _strstr - extract substring
 * @haystack: substring 1
 * @needle: substring 2
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
