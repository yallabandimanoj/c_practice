#include <stdio.h>

int main() {
     volatile const int  a=10;
    if(a == 10)
    {
        printf("%d\n",a);
        int *p=&a;
	*p =100;
    }
    printf("%d\n",a);
    return 0;
}
