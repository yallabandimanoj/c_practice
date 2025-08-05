#include<stdio.h>

int main(void)
{

int n = 0x1234;

//n =(n & 0xf00f) | ((n & 0x0f00) >> 4) | ((n & 0x00f0) << 4);

n =  (n & 0x0ff0) | ((n & 0xf000) >> 12) | ((n & 0x000f) << 12);

printf("0x%x\n",n);

return 0;


}

// output:0x1324

//n =(n & 0x0ff0) | ((n & 0xf000) >> 12) | ((n & 0x00ff) << 12); by using logic got below
//here shifting after three nibbles (nibble means four bits )4*3=12 i.e using shifting with 12

//output:0x4231
