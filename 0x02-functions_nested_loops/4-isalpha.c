# include "main.h"
/**
 * _isalpha - check if character is a letter or not
 *
 * @c: takes input from another functions
 *
 * Return: returns 1 is c if true else o
**/

int _isalpha(int c)
{
        if (c <= 122 && c >= 97)
                return (1);
        else if (c >= 65 && c <= 90)
                return (1);
        return (0);
}
