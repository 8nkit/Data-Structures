#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
struct node *tree;
void create_tree(struct node *);
struct node *insertElement(struct node *,int);
void preorderTraversal(struct node *);
void InorderTraversal(struct node *);
int main()
{
int option,val;
struct node *ptr;
create_tree(tree);
do
{
 printf("\n####Main Menu####");
 printf("\n1.Insert Element\n2.Preorder Traversal\n3.Inorder Traversal\n4.Exit\n");
 printf("\tEnter your option : ");
 scanf("%d",&option);
 switch(option)
  {
   case 1: printf("\n\nEnter the value of the new node : ");
           scanf("%d",&val);
           tree=insertElement(tree,val);
           break;
   case 2: printf("\nThe elements of the preorder traversal are \n");
           preorderTraversal(tree);
           break;
   case 3: printf("The elements of the inorder traversal are\n");
           InorderTraversal(tree);
           break;
  default: printf("Wrong Choice");
  }
}
while(option!=4);
return 0;
}
void create_tree(struct node *tree)
 {
  tree=NULL;
 }
struct node *insertElement(struct node *tree,int val)
{
 struct node *ptr,*nodeptr,*parentptr;
 ptr=(struct node *)malloc(sizeof(struct node));
 ptr->data=val;
 ptr->left=NULL;
 ptr->right=NULL;
 if(tree==NULL)
  {
   tree=ptr;
   tree->left=NULL;
   tree->right=NULL;}
  else
  {
   parentptr=NULL;
   nodeptr=tree;
   while(nodeptr!=NULL)
   {
    parentptr=nodeptr;
    if(val<nodeptr->data)
    nodeptr=nodeptr->left;
    else
    nodeptr=nodeptr->right;}
    if(val<parentptr->data)
    parentptr->left=ptr;
    else
    parentptr->right=ptr;
  }
return tree;
}
void preorderTraversal(struct node *tree)
 {
  if(tree!=NULL)
  {
   printf("%d\n",tree->data);
   preorderTraversal(tree->left);
   preorderTraversal(tree->right);
  }
}
   void InorderTraversal(struct node *tree)
  {
   if(tree!=NULL)
   {
    InorderTraversal(tree->left);
    printf("%d\n",tree->data);
    InorderTraversal(tree->right);
   }
}
