#include<stdio.h>
#include <stdlib.h>
struct NODE
{
  int Info;
  struct NODE*next;
};
 struct NODE  *head = NULL;
 struct NODE *prev, *curr;

void AddNode(int item)
{
  struct NODE *newnode;
  newnode=(struct NODE*)malloc(sizeof(struct NODE));
  newnode -> Info = item;
  newnode -> next = NULL;
 if ( head==NULL )
 {
  head = newnode;
  return ;
 }
 if(newnode -> Info<head->Info)
  {
    newnode->next =head;
    head=newnode;
    return ;
  }
 prev = NULL;
 curr = NULL;
 curr=head;
 while(curr!=NULL)
  {
    curr=curr->next;
      if(newnode->Info <= curr->Info)
       {
        break ;
       prev = curr;
       }
  }
newnode -> next = prev -> next;
prev -> next = newnode;
}  //  end of AddNode function
int DeleteNode()
{
 struct NODE *temp;
 int item ;
 if(head==NULL)
 {
     printf("Empty List");
     return ;
 }
 printf("Enter the value to be deleted\n");
 scanf("%d",&item);
  if(item==head -> Info)
  {
      head = head -> next;
      return ;
  }
   curr = head;
   prev = curr;
   while(curr->Info != item)
    {
        prev = curr;
        curr = curr ->next;
     if(curr == NULL)
     {
        printf("Item not found in the list");
        return ;
     }
    }
    temp=curr;
    prev ->next = curr ->next;
/**
int item
if (HEAD =NULL)
 {
    printf("Empty List");
    return;
 }
printf("entwer the value to be delete");
scanf("%d",&item);
if (item = HEAD -> Info)
{
HEAD = HEAD -> Next;
return ;
}
Prev  = NULL;
Curr = NULL;
while(CURR ! = NULL)
{
    CURR = HEAD ;
    CURR = CURR ->Next;
}
if(NewNode->Info = CURR ->Info)
{
    break ;
}
PREV = CURR;
if(CURR = NULL)
{
    printf("Item not found in the list");
     return ;
}
PREV ->NEXT = CURR ->NEXT ;*/
    free(temp);
}//  end of DeleteNode function
void Traverse()
{
  curr = head;
  while(curr!=NULL)
  {
    printf("%d\n",curr->Info);
    curr =  curr -> next;
  }
} //  end of Traverse function
int main()
{
  int inf, ch;
while(1)
{
  printf( " \n\n\n\n Linked List Operations\n\n");
  printf( "  1- Add Node  \n  2- Delete Node \n");
  printf(  "  3- Traverse  List  \n  4- exit\n");
  printf( "\n\n  Your Choice: ");
  scanf("%d",&ch);
switch(ch)
 {
   case 1: printf( "\n  Put info/value to Add: ");
           scanf("%d",&inf);
           AddNode(inf);
           break;
   case 2: DeleteNode();
           break;
   case 3: printf("\n Linked List Values:\n");
           Traverse();
           break;
   case 4: exit(0);
 }//end of switch i
}// end  of   while loop
return 0;
}// end of main ( ) function
