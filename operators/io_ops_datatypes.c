#include <stdio.h>

int main() {
    // Integer types
    int i;
    short s;
    long l;
    long long ll;

    // Unsigned types
    unsigned int ui;
    unsigned short us;
    unsigned long ul;
    unsigned long long ull;

    // Floating point types
    float f;
    double d;
    long double ld;

    // Character types
    char c;
    unsigned char uc;

    // String (char array)
    char str[100];

    // Boolean type (C99)
    _Bool b;

    printf("Enter an int: ");
    scanf("%d", &i);

    printf("Enter a short: ");
    scanf("%hd", &s);

    printf("Enter a long: ");
    scanf("%ld", &l);

    printf("Enter a long long: ");
    scanf("%lld", &ll);

    printf("Enter an unsigned int: ");
    scanf("%u", &ui);

    printf("Enter an unsigned short: ");
    scanf("%hu", &us);

    printf("Enter an unsigned long: ");
    scanf("%lu", &ul);

    printf("Enter an unsigned long long: ");
    scanf("%llu", &ull);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a double: ");
    scanf("%lf", &d);

    printf("Enter a long double: ");
    scanf("%Lf", &ld);

    printf("Enter a character: ");
    scanf(" %c", &c); // space before %c to consume any leftover newline

    printf("Enter an unsigned character (as character): ");
    scanf(" %c", &uc);

    printf("Enter a string (no spaces): ");
    scanf("%s", str);

    printf("Enter a boolean value (0 or 1): ");
    scanf("%hhd", &b); // _Bool is stored as unsigned char

    // Displaying all values
    printf("\nYou entered:\n");
    printf("int: %d\n", i);
    printf("short: %hd\n", s);
    printf("long: %ld\n", l);
    printf("long long: %lld\n", ll);
    printf("unsigned int: %u\n", ui);
    printf("unsigned short: %hu\n", us);
    printf("unsigned long: %lu\n", ul);
    printf("unsigned long long: %llu\n", ull);
    printf("float: %f\n", f);
    printf("double: %lf\n", d);
    printf("long double: %Lf\n", ld);
    printf("char: %c\n", c);
    printf("unsigned char: %c (ASCII: %u)\n", uc, uc);
    printf("string: %s\n", str);
    printf("boolean: %s\n", b ? "true" : "false");

    return 0;
}

