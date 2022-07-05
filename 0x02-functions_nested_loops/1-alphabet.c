#include <main.h>

/**
 * print the alphabet, in lowercase, followed by a new line.
 * you can use _putchar twice in your code
 *
 * main returns 0 (success)
 *
 * */

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
