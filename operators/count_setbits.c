#include <stdio.h>

// count no of set bits use for loop in one line

int main() {
	int n, count;
	printf("Enter an integer: ");
	scanf("%d", &n);
	for (count = 0; n; n &= (n - 1)) count++;
	printf("Set bits: %d\n", count);
	return 0;
}

