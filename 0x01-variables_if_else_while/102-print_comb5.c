#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i <= 99; i++) {
        for (j = i; j <= 99; j++) {
            if (i == j) {
                continue;
            }
            if (i > j) {
                int temp = i;
                i = j;
                j = temp;
            }
            putchar('0' + i / 10);
            putchar('0' + i % 10);
            putchar(' ');
            putchar('0' + j / 10);
            putchar('0' + j % 10);
            if (i < 98 || j < 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    return 0;
}
