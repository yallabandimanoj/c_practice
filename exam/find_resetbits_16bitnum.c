#include<stdio.h>
#include<stdint.h>

int main()
{
	uint16_t n;
	int ones =   0,zero=0;
	printf("enter a 16 bit number\n");
	scanf("%hd",&n);
	int bits = 16;
        
/*
	for (int i =0;i<16;i++)
	{

		if(((num >> i)& 1) == 0){

			count++;
	}
}*/
	while(bits--){
		if(n&1){
			ones++;
		}
		else
		{
			zero++;
		}
		n=n>>1;
	}
			
printf("number of setbits in %u = %d\n",n,ones);
printf("number of resetbits in %u = %d\n",n,zero);
return 0;
}

