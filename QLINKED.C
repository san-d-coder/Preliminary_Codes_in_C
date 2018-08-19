#include<stdlib.h>
struct node
{
int info;
struct node *next;
}*front=NULL,*rear=NULL;
typedef struct node *NODEPTR;
void insertq(int data);
void delq();
void display();
void main()
{
int data,ch;
clrscr();
while(1)
{
printf("\n\t\t");
printf("\n\t\t1.insert : ");
printf("\n\t\t2.display: ");
printf("\n\t\t3.delete : ");
printf("\n\t\t4.exit   : ");
printf("\n\t\tenter choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n\t\tenter data: ");
       scanf("%d",&data);
       insertq(data);
       break;
case 2:display();
       break;
case 3:delq();
       break;
case 4:exit(0);
default:printf("\n\t\tsorry!!:::wrong choice:::");
}
}
}
void insertq(int data)
{
NODEPTR p;
p=(NODEPTR)malloc(sizeof(NODEPTR));
p->info=data;
p->next=NULL;
if(front==NULL)
{
front=p;
}
else
{
rear->next=p;
}
rear=p;
printf("\n\t\t%d is inserted",data);
}
void display()
{
NODEPTR q;
if(front==NULL)
{
printf("\n\t\t void display ");
}
else
{
printf("\n\t\t queue containts:\n\t\t");
for(q=front;q!=NULL;q=q->next)
printf(" %d ",q->info);
}
}
void delq()
{
NODEPTR q;
int d;
if(front==NULL)
{
printf("\n\t\t void deletion ");
}
else
{
q=front;
d=q->info;
front=q->next;
free(q);
printf("\n\t\t %d is deleted ",d);
}
}