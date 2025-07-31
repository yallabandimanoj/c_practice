#include <stdio.h>

void print_binary(int num) {
    printf("Binary: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    int num, bit, choice;

    printf("Enter an integer number (0-255): ");
    scanf("%d", &num);

    printf("Initial value:\n");
    printf("Decimal: %d\n", num);
    print_binary(num);

    printf("\nEnter bit position to work on (0 to 7): ");
    scanf("%d", &bit);

    printf("\nChoose operation:\n");
    printf("1. Set bit\n");
    printf("2. Clear bit\n");
    printf("3. Toggle bit\n");
    printf("4. Check bit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            num = num | (1 << bit);
            printf("After setting bit %d:\n", bit);
            break;
        case 2:
            num = num & ~(1 << bit);
            printf("After clearing bit %d:\n", bit);
            break;
        case 3:
            num = num ^ (1 << bit);
            printf("After toggling bit %d:\n", bit);
            break;
        case 4:
            if (num & (1 << bit))
                printf("Bit %d is SET (1)\n", bit);
            else
                printf("Bit %d is CLEAR (0)\n", bit);
            return 0;  // exit early
        default:
            printf("Invalid choice\n");
            return 1;
    }

    printf("Decimal: %d\n", num);
    print_binary(num);

    return 0;
}
