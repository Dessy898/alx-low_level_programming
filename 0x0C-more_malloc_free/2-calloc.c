#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: the size of the memory to print
 *
 * Return: pointer to the memory area size
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
