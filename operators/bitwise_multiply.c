#include<stdio.h>

int mul(int a,int b )
{
  int result = 0;
  while(b>0)
  {
	  
	  if(b&1)
		  result +=a;
	  a <<= 1;
	  b >>= 1;
  }
     return result;
}
int main()
{
	int x=10,y=10,res;

	res = mul(x,y);

	printf("%d",res);
}


