#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int result = num & (num - 1); // clears the rightmost set bit

    printf("After turning off rightmost set bit: %d\n", result);
    return 0;
}

