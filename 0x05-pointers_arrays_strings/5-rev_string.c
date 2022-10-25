#include "main.h"

/**
 * rev_string - Write a function that reverses a string
 * @str: input
 * Return: print
 */

void rev_string(char *s)

{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}		
