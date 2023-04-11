#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number containing the bit.
 * @index: The index of the bit - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of the bit at the index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if the index is greater than or equal to the size of unsigned long int */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Check if the bit at the index is 0 */
	if ((n & (1 << index)) == 0)
		return (0);

	/* The bit at the index is 1 */
	return (1);
}

