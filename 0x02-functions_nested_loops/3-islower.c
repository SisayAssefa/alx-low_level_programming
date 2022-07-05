#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	char _char;

	_char = 'a';
	while (_char <= 'z')
	{
		if (c == _char)
			return 1;
	}
	
	return 0;
}
