#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * _pow_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: The natural square root
 */
int _sqrt_helper(int n, int low, int high);

int _sqrt_recursion(int n) {
    if (n < 0) {
        /* error: negative number */
        return -1;
    } else if (n == 0) {
        /* base case: square root of 0 is 0 */
        return 0;
    } else {
        /* start recursive search */
        return _sqrt_helper(n, 1, n);
    }
}

int _sqrt_helper(int n, int low, int high) {
    int mid;
    int sqr;

    if (high < low) {
        /* error: no natural square root */
        return -1;
    }

    mid = (low + high) / 2; /* integer division, rounds down */
    sqr = mid * mid;

    if (sqr == n) {
        /* found natural square root */
        return mid;
    } else if (sqr > n) {
        /* search left half */
        return _sqrt_helper(n, low, mid - 1);
    } else {
        /* search right half */
        return _sqrt_helper(n, mid + 1, high);
    }
}

