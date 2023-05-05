#include "main.h"

/**
 * clear_bit - sets the value of a particular bit to 0
 * @n: pointer to the number to edit
 * @index: index of the bit to clear with the function
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
