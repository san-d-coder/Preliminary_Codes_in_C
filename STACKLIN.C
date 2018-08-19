#include<stdlib.h>
struct node
{
int info;
struct node *next;
}*top=NULL;
typedef struct node *NODEPTR;
void push(int data);
void pop();
void display();
void main()
{
int data,ch;
clrscr();
while(1)
{
printf("\n\t\t1.push   : ");
printf("\n\t\t2.display: ");
printf("\n\t\t3.pop    : ");
printf("\n\t\t4.exit   : ");
printf("\n\t\tenter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n\t\tenter data: ");
       scanf("%d",&data);
       push(data);
       break;
case 2:display();
       break;
case 3:pop();
       break;
case 4:exit(0);
default:printf("\n\t\tsorry!!:::wrong choice:::");
}
}
}
void push(int data)
{
NODEPTR p;
p=(NODEPTR)malloc(sizeof(NODEPTR));
p->info=data;
p->next=top;
top=p;
printf("\n\t\t%d is inserted",data);
}
void display()
{
NODEPTR q;
printf("\n\t\tstack contains:\n\t\t");
for(q=top;q!=NULL;q=q->next)
printf(" %d ",q->info);
}
void pop()
{
NODEPTR q;
int d;
if(top==NULL)
printf("\n\t\t void deletion");
else
{
q=top;
top=top->next;//q=q->next;
d=q->info;
free(q);
}
printf("\n\t\t%d is deleted",d);
}