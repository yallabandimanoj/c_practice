#include <stdio.h>

#pragma pack(1)
struct Example {
        char t;
     	char c;
        int i;
	char v;

};

int main() {
    printf("Size of struct: %zu\n", sizeof(struct Example));
    printf("Size of struct: %zu\n", sizeof(long double));
    return 0;
}

