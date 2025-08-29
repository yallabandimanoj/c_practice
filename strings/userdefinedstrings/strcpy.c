#include<stdio.h>
void mystrcpy(char *dest,const char *src)
{
    while(*src)
    {
        *dest = *src;
       
       
        *dest++;
        *src++;
}
*dest = '\0';
}
int main()
{
  char source[] ="embedded engineer";
  char destination [20];
  mystrcpy(destination,source);
  printf("source : %s\n Destination :%s\n",source,destination);
  return 0;
 
 
}
