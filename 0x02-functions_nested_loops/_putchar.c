#include <unistd.h>
#include "main.h"

/**
 * main is the entry for the fuchtion
 *
 * describtion it is printing string
 *
 * Return:	on succes 1 is returned
 *		on error -1 is returned
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
