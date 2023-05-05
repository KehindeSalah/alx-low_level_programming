#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a base 10 number
 * @n: number to check
 * @index: index of bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
