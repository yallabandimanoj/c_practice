#include <stdio.h>
//find the pos of rightmost setbt

int main() {
    int num, pos = 1;
    scanf("%d", &num);

    if (num == 0) {
        printf("No set bit\n");
        return 0;
    }

    while ((num & 1) == 0) { // check if LSB is 0
        num >>= 1;           // shift right until we find a 1
        pos++;
    }

    printf("Rightmost set bit position: %d\n", pos);
    return 0;
}

