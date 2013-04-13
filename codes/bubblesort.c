#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int*);
void swap(int*, int*);
void print_array(int*);

int main()
{
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    int i;
    printf("Size of the array is %d \n", sizeof(arr));
    print_array(arr);
    bubble_sort(arr);
    print_array(arr);
    if(arr)
        free(arr);
    if(arr==NULL) printf("There is not enough memory in the array.\n");
    return 0;
}

void bubble_sort(int* arr)
{
    int i,j;
    int size = sizeof(arr)/sizeof(int);
    printf("From the bubble_sort function: size of the array is %d \n", size);
    for(i=0;i<size;i++)
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }

}
void swap(int* x, int* y)
{
    printf("Swapping %d and %d \n", *x, *y);
    int temp = *x;
    *x=*y;
    *y=temp;
}

void print_array(int* arr)
{
    int size = sizeof(arr)/sizeof(int);
    int i;
    for(i=0;i<size;i++)
        printf("Element %d --> %d \n",i, arr[i] );
}
