#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @c: char
 * @size: size of the array
 *
 * Return: NULL if size = 0 , a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
char *array = malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (unsigned int i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}