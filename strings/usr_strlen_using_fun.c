#include <stdio.h>

int myStrlen(const char *s) {
    int len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}



int main(void) {
    char s[100] = "hello world";
 int len =   myStrlen(s);
    myStrlen(s);
    printf("string length %d\n",len);
    return 0;
}

