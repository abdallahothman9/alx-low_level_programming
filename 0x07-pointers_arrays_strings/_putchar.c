#include <unistd.h>
#include "main.h"
/**
 * _putchar - write character in screen
 * @C: take ana character
 * Return: return 1 on success
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
