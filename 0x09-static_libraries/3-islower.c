#include "main.h"
/**
 * _islower - checksfor lowercase character
 * @c: the integer value it receives
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
