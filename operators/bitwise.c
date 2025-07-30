#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("\nBitwise Operations:\n");
    printf("AND (a & b)  = %d\n", a & b);
    printf("OR  (a | b)  = %d\n", a | b);
    printf("XOR (a ^ b)  = %d\n", a ^ b);

    return 0;
}



