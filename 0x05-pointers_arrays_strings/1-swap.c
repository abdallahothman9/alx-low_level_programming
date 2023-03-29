#include "main.h"
/**
 * swap_int - changeing values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 always
**/
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;

	*a = *b;

	*b = temp;

	return (0);
}
