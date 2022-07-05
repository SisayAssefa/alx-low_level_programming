#include "main.h"

/**
 * print the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char _char;

	_char = 'a';
	
	while (_char <= 'z')
	{
		_putchar(_char);
		_char++;
	}
	
	_putchar('\n');
}
