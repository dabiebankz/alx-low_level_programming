#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int i;

	i = 0;

	while (i < 10)

	for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	i++;

	_putchar('\n');
}
