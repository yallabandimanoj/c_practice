#include<stdio.h>

#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define MIN3(a,b,c) (MIN(MIN(a,b),c))

int main()
{
	int x,y,z;
printf("enter three numbers\n");

scanf("%d %d %d",&x,&y,&z );

printf("minimum =%d\n",MIN3(x,y,z));

return 0;
}

