#include <stdio.h>

int main() {
    int n;
    unsigned long long fact = 1;

    scanf("%d", &n);

    // Check if n is negative using bitwise
    if (n & (1 << 31)) { // For 32-bit signed int
        printf("Negative value not allowed\n");
        return 0;
    }

    for (int i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial of %d = %llu\n", n, fact);
    return 0;
}

