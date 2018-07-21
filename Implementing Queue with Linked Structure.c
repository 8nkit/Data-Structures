// A Program that exercise the operations on QUEUE
// using Linked Structures / POINTER (Dynamic Binding)
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
struct QNODE
{
   int Info;
   struct QNODE *Next;
};
struct QNODE *REAR=NULL, *FRONT=NULL;

void Enqueue(int);
int  Dequeue(void);
void Traverse(void);
void main(void)
{
    int ITEM, choice;
    printf("    *******  QUEUE  USING POINTERS  ********* \n");
    while( 1 )
    {
        printf(" \n\n\t  ( 1 ) Enqueue  \n\t  ( 2 ) Dequeue \n");
        printf("\t  ( 3 ) Print queue \n\t  ( 4 ) Exit.");
        printf(" \n\n\n\t  Your choice ---> ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:   printf( "\n Enter a number: ");
                      scanf("%d",&ITEM);
                      Enqueue(ITEM);
                      break;
            case 2:   ITEM = Dequeue();
                      if(ITEM)
                      printf("  \n Deleted from Q = %d",ITEM);
                      break;
            case 3:   printf(" \n \n List  of values on QUEUE \n");
                      Traverse();
                      break;
            case 4:   exit(0);
                      break;
            default:  printf("\n\n\t  Invalid Choice: \n");
        } // end of switch block
    } // end of while loop
}  // end of of main() function
void Enqueue (int ITEM)
{
struct QNODE *NewNode;
NewNode=(struct QNODE*)malloc(sizeof(struct QNODE));
NewNode -> Info = ITEM ;
NewNode -> Next = NULL ;
 if (REAR==NULL)
 {
     REAR = NewNode;
     FRONT =NewNode;
 }
 else
 {
    REAR -> Next = NewNode;
    REAR = NewNode ;
 }
}
int Dequeue(void)
{
    int ITEM;
  if(FRONT == NULL)
  {
    printf("UNDERFLOW / Empty QUEUE");
  }
ITEM = FRONT -> Info;
 if(FRONT == REAR)
  {
    REAR = NULL;
    FRONT = NULL;
  }
 else
  {
    FRONT = FRONT -> Next;
  }
 return ITEM;
}
void Traverse(void)
{
struct QNODE *F;
 if (FRONT == NULL)
 {
     printf("UNDERFLOW / Empty QUEUE");
 }
 F = FRONT;
 while(F != NULL)
 {
  printf("%d \n",F ->Info);
  F=F -> Next;
 }
}
