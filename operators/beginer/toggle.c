#include <stdio.h>

int main() {
    int num = 10; // Binary: 1010
    int i = 1;    // Toggle the 1st bit

    num = num ^ (1 << i);  // or: num ^= (1 << i);

    printf("Number after toggling bit %d: %d\n", i, num);
    return 0;
}

