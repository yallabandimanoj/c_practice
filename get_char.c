#include<stdio.h>
#include<termios.h>
#include<unistd.h>
int main()

{
	char ch1,ch2;
	ch1 = getch();
	
	//ch2 = get();
	printf("ch1=%c ch2=%c \n",ch1,ch2);
}

