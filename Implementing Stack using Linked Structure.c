// A Program that exercise the operations on Stack
// Implementing POINTERS (Linked Structures) (Dynamic Binding)
// This program provides you the concepts that how STACK is
//  implemented using Pointer/Linked Structures
#include  <stdio.h>
#include  <stdlib.h>
int item;
struct NODE
{
    int Info;
    struct NODE *next;
};
struct NODE *TOP = NULL;
void PUSH (int item)
{
struct NODE *newnode;
newnode=(struct NODE*)malloc(sizeof(struct NODE));
newnode -> Info = item;
newnode -> next = TOP;
TOP = newnode;
}
int POP ()
{
 struct NODE *T;
 if (IsEmpty()==1)
  {
    printf("UNDERFLOW/ Stack is empty");
  }
  else
{
item = TOP -> Info;
T = TOP;
TOP = TOP -> next;
free(T);
 return item;
}
}
int PEAK ()
{
  if(IsEmpty()==1)
  {
   printf("UNDERFLOW/ Stack is empty");
  }
   else
   {
    item = TOP -> Info;
    return item;
   }
}
 void TRAVERSE ()
{
  if (IsEmpty()==1)
  printf("UNDERFLOW/ Stack is empty");
  else
  {
   struct NODE *T;
   T = TOP;
   while( T!=NULL )
   {
   printf("%d\n",T->Info);
   T=T->next;
   }
 }
}
int IsEmpty()
{
 if(TOP==NULL)
   return 1;
else
   return -1;
}
int main ()
{
    struct NODE *T;
    int choice;
    while(1)
    {
        printf(  "\n\n\n\n\n");
        printf(  "    *******  STACK  OPERATIONS   ********* \n\n");
        printf(  "  1-  Push item \n  2-  Pop item \n");
        printf(  "  3-  Peak (Top item) \n  4-  Traverse  / Display  Stack items \n");
        printf( "  5-  Exit.");
        printf(  " \n\n\t  Your choice ---> ");
        scanf(" %d", &choice);
        switch(choice)
        {
            case 1: printf("\nPut  a value: ");
                    scanf("%d",&item);
                    PUSH(item);
                    break;
            case 2: if(IsEmpty()==1)
            {
                printf("\n\n  Stack is Empty\n");
                break;
            }
            item = POP();
            printf("%d has been deleted \n",item);
            break;
            case 3: if(IsEmpty()==1)
                    {
                      printf("\n\n  Stack is Empty\n" );
                      break;
                    }
            item = PEAK();
            printf( "\n %d is on the Peak ", item);
            break;
            case 4: if(IsEmpty()==1)
                    {
                      printf("\n\n  Stack is Empty\n");
                      break;
                    }
            TRAVERSE();
            break;
            case 5:  exit(0);
            default :   printf("\n Invalid choice ");
             } // end of switch block
}  // end of loop
return   0;
} // end of main function
