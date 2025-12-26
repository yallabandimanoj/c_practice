#include <stdio.h>

int main() {
    // The string we want to analyze
    char name[] = "Manoj";
    // An integer variable to use as a loop counter
    int i = 0;

    printf("Character | ASCII Value (Decimal)\n");
    printf("----------|----------------------\n");

    // Loop through the string until the null terminator ('\0') is reached
    while (name[i] != '\0') {
        // Print the character and its integer value
        // %c prints the character itself
        // %d prints the decimal integer value of that character
        printf("    %c     |         %d\n", name[i], name[i]);
        i++;
    }

    return 0;
}

