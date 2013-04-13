#include <stdio.h>
#include <stdlib.h>

#define PRINTINFO(message) print_info(__FILE__, __LINE__, __DATE__, __TIME__,  message)

void print_info(const char* file,int line, const char* date, const char* time, const char* message)
{
    printf("FILE is : %s\n ", file);
    printf("LINE is : %d\n ", line);
    printf("DATE is : %s\n ", date);
    printf("TIME is : %s\n ", time);
    printf("message is : %s\n ", message);
    #ifdef __cplusplus
    extern "C"{
    printf("This is a C++ compiler.");
    }
    #endif // __cplusplus
    //compiler?printf("The compiler is c++ compiler.\n"): printf("The compiler is not c++ compiler\n");
}

int main()
{
    PRINTINFO("Checking the macros.");
    return 0;
}
