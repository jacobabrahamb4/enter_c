#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *strptr = NULL, *copy = NULL;
    strptr = "Jacob Abraham"; // this will be stored in a read only location hence cannot be modified.
    int i, size=0;
    printf("%p \n",strptr);
    for(copy=strptr;*copy!='\0';copy++,size++,printf("original --> %c \n",*copy))
    {
        printf("%c \n",(*copy>='a'&& *copy<='z')?('A'+*copy-'a'):(*copy));
        //*copy=(*copy>='a'&& *copy<='z')?('A'+*copy-'a'):(*copy); // this is not allowed.
    }
    printf("%p \n",strptr);
    printf("%s", strptr);
    return 0;
}
