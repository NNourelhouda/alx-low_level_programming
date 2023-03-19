#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
 {
    int i = '0';

    while (i <= '9') {
        putchar(i);
        i++;
    }
    int j = 'a';

    while ( j <= 'f') {
        putchar(j);
        j++;
    }

    putchar('\n');
    return 0;
}
