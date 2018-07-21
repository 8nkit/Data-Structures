#include <stdio.h>
#include <stdlib.h>
#include <process.h>
struct TREE
{
  int info;
  struct TREE *Left;
  struct TREE *Right;
};
struct TREE *ROOT = NULL; // initially ROOT is NULL
void AttachNode( struct TREE *pRoot, struct TREE *NewNode )
{
  // Place Your Code Here
}
struct TREE *Insert(struct TREE *pRoot , int ITEM)
{
 if (pRoot==NULL)
 {
  pRoot=(struct TREE*)malloc(sizeof(struct TREE));
  pRoot->Left=NULL;
  pRoot->Right=NULL;
  pRoot->info=ITEM;
 }
 else
     {
     if (ITEM<pRoot->info)
        pRoot->Left=Insert(pRoot ->Left,ITEM);
     }
     else
     {
         pRoot->Right=Insert(pRoot ->Right,ITEM);
     }
    return(pRoot);
}

void Pre_Order(struct TREE *pRoot)
{
  if (pRoot != NULL)
  {
      pRoot-> info;
      Pre_Order (pRoot -> Left);
      Pre_Order( pRoot -> Right);
  }
}
void Post_Order(struct TREE *pRoot)
{
if (pRoot != NULL)
  {
    Post_Order (pRoot -> Left);
    Post_Order ( pRoot -> Right);
    pRoot-> info;
  }
}
void In_Order(struct TREE *pRoot)
{
   if (pRoot != NULL)
   {
     In_Order (pRoot -> Left);
     pRoot-> info;
     In_Order ( pRoot -> Right);
   }
}
void DisplayDescending(struct TREE *pRoot)
{
 // Place Your Code Here
}

void DeleteTree( struct TREE *pRoot)  // This function deletes all nodes in the tree
{
 // Place Your Code Here
}
int main( void )
{
 int choice, item;
 while( 1 )
 {
   printf("\n\n\n  Binary Search Tree Functions\n\n");
   printf("\n1. Insert a New Node");
   printf("\n2. Remove Existing Node");
   printf("\n3. In-Order Traverse (Ascending Order)");
   printf("\n4. Pre-Order Traverse ");
   printf("\n5. Post-Order Traverse ");
   printf("\n6. Display in Descending Order   (Reverse)");
   printf("\n7. Exit");
   printf("\nEnter you choice: ");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1: printf("\n\n put a number: ");
             scanf("%d",&item);
             Insert(item);
             break;
   /*  case 2: Remove(); // This function is not defined.
             break;   //  Students shall write this function as home work.
   */  case 3: printf("\n\n\n In-Order Traverse (ASCENDING ORDER)\n");
             In_Order(ROOT);
             printf("\n\n");
             break;
     case 4: printf("\n\n\n Pre-Order Traverse \n");
             Pre_Order(ROOT);
             printf("\n\n");
             break;
     case 5: printf("\n\n\n Post-Order Traverse \n");
             Post_Order(ROOT);
             printf("\n\n");
             break;
     case 6: printf("\n\n\nDESCENDING ORDER  (Reverse )\n");
             DisplayDescending(ROOT);
             printf("\n\n");
             break;
     case 7: DeleteTree(ROOT);
             exit(0);
    default: printf("\n\nInvalid Input");
  } // end of switch
 } // end of while loop
} // end of main( ) function
