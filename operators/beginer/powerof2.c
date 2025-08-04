#include <stdio.h>
// using condiitonal operator

int main() {
    int num;
    scanf("%d", &num);
    printf((num > 0 && (num & (num - 1)) == 0) ? "Power of 2\n" : "Not a power of 2\n");
    return 0;
}

