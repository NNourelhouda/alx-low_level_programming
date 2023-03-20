#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i = '0';
char x = 'a';
    while (i <= '9') {
        putchar(i);
        i++;
    }

    while ( x <= 'f') {
        putchar(x);
        x++;
    }
    {
    putchar('\n');
    return (0);
    }
}
