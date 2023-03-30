#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 substitution cipher.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int len = 0;
	char c;
	int i;

	while (str[len])
		len++;

	for (i = 0; i < len; i++)
	{
		c = str[i];

		if (c >= 'a' && c <= 'z')
		{
			c += 13;

			if (c > 'z')
				c -= 26;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			c += 13;

			if (c > 'Z')
				c -= 26;
		}

		str[i] = c;
	}

	return (str);
}
