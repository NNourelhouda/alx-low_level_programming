#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * is_prime_number - Checks if a given number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
#include <stdio.h>

int is_prime_number(int n)
{
	int i = 5;
    int w = 2;
    if (n <= 1) {
        return 0;
    }

    if (n == 2 || n == 3) {
        return 1;
    }

    if (n % 2 == 0 || n % 3 == 0) {        return 0;
    }


    while (i * i <= n) {
        if (n % i == 0) {
            return 0;
        }

        i += w;
        w = 6 - w;
    }
    return 1;
}
