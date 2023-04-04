#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @n: number of bytes
 * @s: pointer of the memory area
 * @b: constant byte
 * 
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i <= n; i++)
{
s[i] = b;
}
return (s);
}
