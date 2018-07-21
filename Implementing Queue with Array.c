#include<stdio.h>
#include<stdlib.h>
#define  QSIZE  10
int QUEUE[QSIZE];
int FRONT = -1;
int REAR  = -1;

void Enqueue(int  ITEM)
{
    if(FRONT==0&&REAR==QSIZE-1|| FRONT== REAR + 1)
    {
        printf("\nOVERFLOW");
        return;

    }

    if(REAR==-1)
    {
        FRONT= 0;
        REAR = 0;
    }
else if(REAR==QSIZE - 1)
{
REAR = 0;
}
else
     REAR = REAR+1;
QUEUE[REAR] = ITEM;

    }
int Dequeue()
{

    int ITEM;
 if(FRONT==-1)
 {
     printf("\nUNDERFLOW");
     return;
 }
 ITEM = QUEUE[FRONT];
 if(FRONT == REAR)
 {
     FRONT= -1;
     REAR = -1;
 }
else if(FRONT==QSIZE - 1)
{
FRONT = 0;
}
else
FRONT = FRONT+1;
  return ITEM;
 }

void Traverse()
{
    int F;
 if(FRONT == -1)
{
     printf("\nUNDERFLOW");
     return;
 }
  F = FRONT;
  while( F!=-1 )
  {
      printf("%d\n",QUEUE[F]);

if(F ==QSIZE -  1)
{F = 0;
  }
  else if(F ==REAR)
    F = -1;
else
    F = F + 1;
  }
}

int main()
{
    int choice,ITEM;
    while(1)
    {
        printf("\n\n\n\n  QUEUE operations\n\n");
        printf("1-Insert  value \n2-Delete value\n");
        printf("3-Traverse  QUEUE \n4-Exit\n\n");
        printf("\t\t  your choice: ");
        scanf("%d", &choice);
switch(choice)
        {
            case 1:
                printf("\n put a Value:");
                scanf("%d", &ITEM);

Enqueue(ITEM);
break;
    case 2:
ITEM=Dequeue();
if(FRONT!=-1)
printf("%d deleted \n",ITEM);
break;
case 3:
printf("\n queue state\n");

Traverse();
break;
case 4:
exit(0);
        }
    }
}
