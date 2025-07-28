#include <stdio.h>

int main() {
    int a, b;
    int sum, diff, prod, mod;
    float div;

    // Input two integers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Perform arithmetic operations
    sum = a + b;
    diff = a - b;
    prod = a * b;

    if (b != 0) {
        div = (float)a / b;  // Typecast to float for accurate division
        mod = a % b;
    } else {
        printf("Division and modulus by zero is not allowed.\n");
    }

    // Display results
    printf("\nResults:\n");
    printf("Addition: %d + %d = %d\n", a, b, sum);
    printf("Subtraction: %d - %d = %d\n", a, b, diff);
    printf("Multiplication: %d * %d = %d\n", a, b, prod);

    if (b != 0) {
        printf("Division: %d / %d = %.2f\n", a, b, div);
        printf("Modulus: %d %% %d = %d\n", a, b, mod); // %% prints a single %
    }

    return 0;
}

