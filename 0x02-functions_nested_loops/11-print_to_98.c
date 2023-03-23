#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
/**
 * print_to_98 - prints all numbers from n to 98, followed by a new line
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        for (int i = n; i <= 98; i++)
        {
            if (i < 0)
            {
                putchar('-');
                i = abs(i);
            }
            if (i / 10 == 0)
            {
                putchar('0');
            }
            printf("%d", i);
            if (i != 98)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    else
    {
        for (int i = n; i >= 98; i--)
        {
            if (i < 0)
            {
                putchar('-');
                i = abs(i)
			  }
            if (i / 10 == 0)
            {
                putchar('0');
            }
            printf("%d", i);
            if (i != 98)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
}
