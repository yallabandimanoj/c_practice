#include <stdio.h>

int main() {
    int num  = 10 ; // Binary: 1010
    int i = 0;     // Set the 0th bit

    num = num | (1 << i);  // or simply: num |= (1 << i);

    printf("Number after setting bit %d: %d\n", i, num);
    return 0;
}

