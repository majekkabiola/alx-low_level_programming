#include "main.h"

/** print_alphabet_x10 - prints teh aklphabets in lowercase,
 * followed by new line ten times 
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
		_putchar(ch);
		ch++;
		}

	_putchar('\n');
	i++;
	}	
}
