#include<stdio.h>
typedef struct
{

int x,y;
}point;
int main()
{
	point p ={ 5,7};
	printf("point:(%d %d)\n",p.x,p.y);
	return 0;
}
/*
 typedef struct 
 {
 int x,y;
 }point;

 int main()
 {
 point p  = { 5,7};
 printf("point:(%d %d)\n",p.x,p.y);
 return 0;
 }
*/

