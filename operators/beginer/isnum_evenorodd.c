#include <stdio.h>

int main() {
    int num;


    printf("Enter a number: ");
    scanf("%d", &num);

    // Check even or odd
    if (num & 1 == 1)
        printf("%d is odd \n", num);
    else
        printf("%d is even\n", num);

    return 0;
}

