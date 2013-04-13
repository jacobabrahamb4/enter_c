#include<stdio.h>
void upper(char *);
void main()
{
     char str[25];
     int len,i=0;
     printf("Enter the String: ");
     gets(str);
     upper(str);                                                         // 1
     printf("\nYour String in Uppercase %s",str);
}
void upper(char *str1)                                           //2
{
while(*str1!='\0')                                                   //3
     {
   if(*str1>96&&*str1<123)                           //4
        *str1=*str1-32;                                      //5
   str1++;                                                        //6
     }
}
