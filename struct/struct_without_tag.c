#include<stdio.h>
int main()
{
	struct
	{
	int x;
	int y;
}point;

point.x=10;
point.y=10;
printf("point: %d %d\n",point.x,point.y);
}
