#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: string to print
 * @n: number of elements of the array to be printed
 * 
 * Return: void
 */

void print_array(int *a, int n)
{
for (int i = 0; i <= n ; i++)
{
printf ("%d, ",*(a+i));
}
printf ("\n");
}
