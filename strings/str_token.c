#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "one,two,three";
    const char delim[] = ",";
    char *token;

    // array to store tokens
    char tokens[10][20];  // up to 10 tokens, each max 20 chars
    int count = 0;

    token = strtok(str, delim);
    while (token != NULL) {
        strcpy(tokens[count], token);  // copy token into array
        count++;
        token = strtok(NULL, delim);
    }
    // print stored tokens later
    printf("Stored tokens:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", tokens[i]);
    }

    return 0;
}

