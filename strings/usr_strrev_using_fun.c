#include <stdio.h>
#include<string.h>

void myStrrev(char *str) {
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main(void) {
    char s[100] = "hello world";
    myStrrev(s);
    printf("Reversed: %s\n", s);
    return 0;
}

