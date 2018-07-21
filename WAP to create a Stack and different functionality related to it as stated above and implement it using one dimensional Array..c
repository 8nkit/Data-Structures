// A Program that exercise the operations on Stack Implementing Array
// i.e. (Push, Pop, Peak and Traverse)
#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 20
//  global  variable and array  declaration
int TOP=-1;   // Initially Stack is empty
int STACK[STACKSIZE]; // Array for Stack
void Push(int);   //   functions prototyping
int  POP( );
int  Peak( );
int IsEmpty( );
int IsFull( );
void Traverse( );
int item;
int main( )
{
    int choice;
    while( 1 )
    {
        printf( "\n\n\n\n\n");
        printf( " ******* STACK OPERATIONS ********* \n\n");
        printf( " 1- Push item \n 2- Pop Item \n");
        printf( " 3- Peak (Top Item) \n 4- Traverse / Display Stack Items \n");
        printf( " 5- Exit.");
        printf( " \n\n\t Your choice ---> ");
        scanf(" %d", &choice);
        switch(choice)
        {
            case 1: if(IsFull()==1)
                    printf( "\n Stack Full/Overflow\n");
            else
            {
                printf( "\n Enter a number: ");
                scanf("%d", &item);
                Push (item);
            }
                 break;
            case 2: if(IsEmpty()==1)
                    printf( "\n Stack is empty \n");
            else
            {
                item=POP();
                printf( "\n deleted from Stack = %d",item);
            }
            break;
            case 3: if(IsEmpty()==1)
                    printf( "\n Stack is empty \n");
            else
            {
                item=Peak();
                printf( "\n Peak of Stack (Top) = %d",item);
            }
               break;
            case 4: if(IsEmpty()==1)
                    printf( "\n Stack is empty \n");
           else
            {
                printf( "\n List of Item pushed on Stack:\n");
                Traverse();
            }
            break;
            case 5: exit(0);
                    default:
            printf( "\n\n\t Invalid Choice: \n");
                    } // end of switch block
    }// end of while loop
}// end of of main() function
void Push(int item)
{
   if(IsFull()==1)
    {
      printf( "\n Stack Full/Overflow\n");
    }
   else
    {
      TOP =TOP+1;
      STACK[TOP]=item;
    }
}
int POP( )
{
    if(IsEmpty()==1)
    {
       printf( "\n Stack is empty \n");
    }
    else
    {
      item=STACK[TOP];
      TOP=TOP-1;
     return item;
    }
}
int Peak( )
{
   if(IsEmpty()==1)
   {
     printf( "\n Stack is empty \n");
   }
   else
    {
      item=STACK[TOP];
       return item;
    }
}
void Traverse ()
{
int T;
if(IsEmpty()==1)
  {
    printf( "\n Stack is empty \n");
  }
else
T=TOP;
while(T>=0)
 {
   printf("%d",STACK[T]);
   T=T-1;
 }
}
int IsEmpty( )
{
 if(TOP==-1)
    return 1;
 else
    return -1;
}
int IsFull( )
{
 if(TOP==STACKSIZE-1)
    return 1;
 else
    return -1;
}
