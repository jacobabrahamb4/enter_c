#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[20];
    int i;
    char c;
    for(i=0;i<20;i++)
        if((name[i]=getchar())==EOF || ferror(stdin))
            name[i]='\0';
    for(i=0;i<20;i++)
        putchar(name[i]);
    return 0;
}
