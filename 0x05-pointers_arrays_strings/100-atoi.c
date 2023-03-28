#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to string to convert
 *
 * Return: integer value of string, or 0 if no numbers found
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Check for leading spaces */
	while (s[i] == ' ')
	{
		i++;
	}

	/* Check for sign */
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}

	/* Iterate over string, converting digits to integers */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	/* Apply sign */
	result *= sign;

	return result;
}
