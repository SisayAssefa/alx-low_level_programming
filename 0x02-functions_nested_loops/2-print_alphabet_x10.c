#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, 
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char _char;
	int i;

	i = 0;

	while (i < 10)
	{
		_char = 'a';
		while (_char <= 'z')
		{
			_putchar(_char);
			_char++;
		}
		_putchar('\n');
		i++;
	}
}
