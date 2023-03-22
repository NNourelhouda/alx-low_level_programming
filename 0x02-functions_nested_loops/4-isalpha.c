#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks whether a character is an alphabetic letter.
 *
 * @c: the character to be checked.
 *
 * Return: 1 if c is a letter, 0 otherwise.
 */

int _isalpha(int c)
{
    if (islower(c) || !islower(c))
    {
        return (1);
    }
    return (0);
}

