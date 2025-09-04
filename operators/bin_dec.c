#include <stdio.h>

int main() {
    int x = 0b1010;  // GCC/Clang extension, not standard C
    printf("%d\n", x);  // prints 10
    return 0;
}

