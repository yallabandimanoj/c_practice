#include <stdio.h>

int main() {
    int num, pos = 1;
    scanf("%d", &num);

    if (num == 0) {
        printf("No set bit\n");
        return 0;
    }

    int mask = num & -num;  // Isolates rightmost set bit

    while (mask >>= 1)
        pos++;

    printf("Rightmost set bit position: %d\n", pos);
    return 0;
}

