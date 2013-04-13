#include <stdio.h>
#include <stdlib.h>

void get_string(int a, char **s)
{
    printf("s in get_string is : %p\n", s);
    switch(a)
    {
    case 0:
        *s = "Everybody";
        break;
    case 1:
        *s = "was";
        break;
    case 2:
        *s = "kung-foo fighting";
        break;
    default:
        *s = "errrrrnt";
    }
}


int main()
{
    char *s;
    char **p;
    int i;
    printf("before: Address of s is : %p\n", &s);
    get_string(2,&s);
    printf("after : Address of s is : %p\n", &s);
    printf("s is \"%s\" \n", s);
    printf("a string return is %p \n", "jacob");

    p = (char**)malloc(sizeof(char *)*10);
    for(i=0;i<10;i++)
    {
        *(p+i)=malloc(30*sizeof(char));
        //or we can write p[i]=malloc(30*sizeof(char));
        sprintf(*(p+i), "This is string #%d", i);
    }
    printf("The strings are printed below.\n");
    for(i=0;i<10;i++)
    {
        printf("%s \n", *(p+i));
    }
    return 0;
}
