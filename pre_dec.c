
/*#include <stdio.h>
int main() {
    int i = 5;
    int result = --i;
    printf("result = %d, i = %d\n", result, i);
    return 0;
}*/

#include<stdio.h>
int main()
{
	int a =3,b;

	b = a++ + ++a;
	printf("b = %d\n",b);
}

