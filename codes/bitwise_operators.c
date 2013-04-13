//http://www.catonmat.net/blog/low-level-bit-hacks-you-absolutely-must-know/

#include <stdio.h>

void check_even_odd(int);
void check_nth_bit_is_set(int , int);
int set_the_nth_bit(int,int);
int unset_the_nth_bit(int,int);
int toggle_nth_bit(int, int);
int turn_off_the_righmost_one(int);
int isolate_the_rightmost_one_bit(int);
int right_propagate_the_rightmost_one_bit(int);
int isolate_rightmost_zero_bit(int);
int turn_on_rightmost_zero_bit(int);
void convert_int_to_bin(int);

int main()
{
    static int n, exit_flag = 1;
    static int n1, n2;
    printf("Enter the function you want to perform(Enter the code: ):- \n");
    printf("0--> Exit the loop! \n");
    printf("1--> Check even/odd \n");
    printf("2--> Check if n'th bit is set. \n");
    printf("3--> set the n'th bit. \n");
    printf("4--> unset the n'th bit. \n");
    printf("5--> toggle the n'th bit.\n");
    printf("6--> turn off the righmost 1.\n");
    printf("7--> isolate the righmost one bit.\n");
    printf("8--> right propagate the right most 1 bit.\n");
    printf("9--> isolate rightmost zero bit.\n");
    printf("10--> turn on the rightmost zero bit.\n");
    printf("11--> convert integer to binary.\n");
    getn(&n,"option");
    while(n && exit_flag)
    {
        switch(n)
        {
            case 0:
                exit_flag = 0;
                break;
            case 1:
                check_even_odd(getn(&n1,"number"));
                break;
            case 2:
                check_nth_bit_is_set(getn(&n1, "number"), getn(&n2, "position"));
                break;
            case 3:
                printf("The n'th bit is set, checkout --> %d", set_the_nth_bit(getn(&n1, "number"), getn(&n2, "position")));
                break;
            case 4:
                printf("The n'th bit is unset, checkout --> %d", unset_the_nth_bit(getn(&n1, "number"), getn(&n2, "position")));
                break;
            case 5:
                printf("The nth bit is toggled, checkout --> %d", toggle_nth_bit(getn(&n1, "number"), getn(&n2, "position")));
                break;
            case 6:
                printf("Turn off the righmost one , cjeckout --> %d", turn_off_the_righmost_one(getn(&n1, "number")));
                break;
            case 7:
                printf("Isolated the rightmost one bit, ckecout --> %d", isolate_the_rightmost_one_bit(getn(&n1, "number")));
                break;
            case 8:
                printf("Right propagate the rightmost one bit --> %d", right_propagate_the_rightmost_one_bit(getn(&n1, "number")));
                break;
            case 9:
                printf("isolate rightmost zero bit --> %d", isolate_rightmost_zero_bit(getn(&n1, "number")));
                break;
            case 10:
                printf("turn on the rightmost zero bit --> %d", turn_on_rightmost_zero_bit(getn(&n1, "number")));
                break;
            case 11:
                printf("Convert into binary --> %d", convert_int_to_bin(getn(&n1, "number")));
                break;
)


        }
    }

}

int getn(int* p, char* str)
{
    printf("Enter the %s \n", str);
    scanf("%d", p);
    return *p;
}

void check_even_odd(int n)
{
    if(n&1) printf("The number is odd! \n");
    else printf("The number is even! \n");
}

void check_nth_bit_is_set(int number, int position)
{
    if(position > 8*sizeof(int)) position%=(8*sizeof(int));
    if(number&(1<<n)) printf("The n'th bit is set. \n");
    else printf("The n'th bit is not set. \n");
}
int set_the_nth_bit(int number,int position)
{
    if(position > 8*sizeof(int)) position%=(8*sizeof(int));
    return (number|(1<<position));
}

int unset_the_nth_bit(int number,int position)
{
    if(position > 8*sizeof(int)) position%=(8*sizeof(int));
    return (x&~(1<<position));
}
int toggle_nth_bit(int number, int position)
{
    if(position > 8*sizeof(int)) position%=(8*sizeof(int));
    return (number^(1<<position));
}
int turn_off_the_righmost_one(int number)
{
    return (number&(number-1));
}
int isolate_the_rightmost_one_bit(int number)
{
    return (number&(-number));
}
int right_propagate_the_rightmost_one_bit(int number)
{
    return (number|(number-1));
}
int isolate_rightmost_zero_bit(int number)
{
    return (~number&(number+1));
}
int turn_on_rightmost_zero_bit(int number)
{
    return (number|(number+1));
}

void convert_int_to_bin(int number)
{
    int i=0, arr[sizeof(int)*8];
    for(i;i<sizeof(int)*8;i++)
        arr[i]=(number&1)?'1':'0';
    for(i=sizeof(int)*8-1;i>=0;i--)
        printf("%c",arr[i]);
}



