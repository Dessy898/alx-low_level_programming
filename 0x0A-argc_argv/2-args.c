#include "main.h"
#include <stdio.h>

/**
  * main - Prints all the args content
  * @argc: number of command line
  * @argv: argument vector
  *
  * Return: Always zero
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
