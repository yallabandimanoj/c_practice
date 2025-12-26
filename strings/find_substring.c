#include<stdio.h>
//#include<string.h>

int main()
{
	
	char str[20];
	char str1[10];
	printf("enter the string\n");
       fgets(str,20,stdin);
       printf("%s\n",str);
       /*

       printf("enter the sub string\n");
       fgets(str1,10,stdin);
       int n;
	int flag=0;
       for(int i=0;str[i]!='\0';i++)
       {
	       if((str[i] == 'i'))
	       {
		       printf("substring is found");
		       flag=1;
		       break;
	       }
	
		     
	       }
       if(flag==0){
	       printf("Not found\n");
       }*/
       return 0;
}
