#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int result = num | (num + 1); // sets the rightmost 0 bit

    printf("After turning on rightmost clear bit: %d\n", result);
    return 0;
}

