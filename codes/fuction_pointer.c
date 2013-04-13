#include <stdio.h>
#include <stdlib.h>

typedef int* intPtr;
typedef float (*fPtr) (float, float);
float plus(float a, float b){return a+b;}
float minus(float a, float b){return a-b;}
float multiply(float a, float b){return a*b;}
float divide(float a, float b){return a/b;}


int main()
{
    float a=6.0, b=2.0;
    float (*ptr2fun)(float, float)=NULL;
    fPtr fp = NULL;
    ptr2fun = &plus;
    printf("a+b is : %f \n", ptr2fun(a,b));
    ptr2fun = &minus;
    printf("a-b is : %f \n", ptr2fun(a,b));
    fp = &multiply;
    printf("axb is : %f \n", fp(a,b));
    fp = &divide;
    printf("a/b is : %f \n", fp(a,b));
    return 0;
}
