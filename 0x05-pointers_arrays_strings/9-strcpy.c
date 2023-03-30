#include <stdio.h>
#include "main.h"
#include <string.h>

 /**
  * _strcpy - copies the string to the buffer
  * @dest : pointer to the buffer
  * @src : pointer to the string
  * 
  * Return : dest
  */
  
char *_strcpy(char *dest, char *src)
{
char *p = dest;
while (*src)
{
*p++ = *src++;
}
*p = '\0';
return dest;
}
