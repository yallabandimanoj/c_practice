#include <stdio.h>

int main() {
    int num = 10; // Binary: 1010
    int i = 3;    // Check 1st bit

    if (num & (1 << i))
        printf("Bit %d is SET in %d.\n", i, num);
    else
        printf("Bit %d is NOT set in %d.\n", i, num);

    return 0;
}

