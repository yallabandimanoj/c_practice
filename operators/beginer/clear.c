#include <stdio.h>

int main() {
    int num = 15; // Binary: 1111
    int i = 1;    // Clear the 1st bit

    num = num & ~(1 << i);  // or: num &= ~(1 << i);

    printf("Number after clearing bit %d: %d\n", i, num);
    return 0;
}

