#include <stdio.h>

void my_strrev(char *str) {
    int i = 0, j = 0;
    char temp;
   
    // find length
    while(str[j] != '\0') j++;
    j--;  // last character index
   
    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char s[] = "manoj";
    my_strrev(s);
    printf("Reversed String: %s\n", s);
}
