#include <stdio.h>

int main() {
    int num = 29; // Binary: 11101
    int count = 0;

    while (num) {
        num &=   (num - 1); // Clears the lowest set bit
        count++;
    }

    printf("Number of set bits: %d\n", count);
    return 0;
}

