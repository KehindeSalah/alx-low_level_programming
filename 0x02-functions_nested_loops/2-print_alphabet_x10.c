#include "main.h"

/**
 * print-alphabet_x10 - prints all alphabets 10 times in lowercase
 * Return: On success 1
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(letter + j);
		}
		_putchar('\n');
	}
}
