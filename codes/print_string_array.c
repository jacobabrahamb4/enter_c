#include <stdio.h>
#include <stdlib.h>


int main(void)
{

    /*
    char board[3][3][3] = {
      {
          {'1','2','3'},
          {'4','5','6'},
          {'7','8','9'}
          },
      {
          {'a','b','c'},
          {'d','e','f'},
          {'g','h','i'}
          },
      {
          {'j','k','l'},
          {'m','n','o'},
          {'p','q','r'}
          }
      };
    int i;
    //char *pboard = *board;
    printf("Address of board is : %p \n",board);
    printf("Address of board[0][0][0] is : %p \n",&board[0][0]);
    printf("What is in board[0][0]: %p \n", board[0][0]);

    printf("Value of board[0][0][0] is : %c \n", board[0][0]);
    printf("Value of *board[0][0] is : %c \n ", *board[0]);
    printf("value of *board[0] is : %p \n", *board);

    for(i=0;i<27;i++) printf("board[%d][%d][%d]: %c \n",(i%9)/3, i/3,i%3, *(**board+i));
    for(i=0;i<9;i++) printf("**(*board+%d) is :%c \n", i, **(*board+i));
    //printf("Using the pointer to the main array.\n");
    //for(i=0;i<27;i++) printf("board[%d][%d] : %c \n", i/3, i%3, *(pboard+i));
    */
    int n;
    char* pchar;
    printf("Enter the number of character sizes to be allocated.\n");
    scanf("%d", &n);
    pchar = (char *)malloc(n*sizeof(char));
    printf("The size allocated for the array is : %d \n", sizeof(pchar));

    return 0;
}
