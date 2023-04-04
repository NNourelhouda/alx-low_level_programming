#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area
 * @n: number of bytes copied
 * @src: source
 * @dest: destination
 * 
 * Return: a pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char* ptr = dest;
while (n--)
{
*ptr++ = *src++;
}
return (dest);
}
