#include <stdio.h>
#include <stdlib.h>

void print_plus_one(void)
{
    static int a=0;
    printf("%d \n", a);
    a++;
}

int main()
{
    print_plus_one();
    print_plus_one();
    print_plus_one();
    print_plus_one();
    print_plus_one();
    return 0;
}
