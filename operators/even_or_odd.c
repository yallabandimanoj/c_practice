#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num & 1) {
        printf("%d is Odd\n", num);
    } else {
        printf("%d is Even\n", num);
    }

    return 0;
}

