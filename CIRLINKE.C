#include<stdlib.h>
struct node
{
int info;
struct node *next;
}*list=NULL;
typedef struct node *NODEPTR;
//NODEPTR getnode();
void creat();
void insafter(int data,int loc);
void delafter(int loc);
void display();
void main()
{
int data,ch,loc,i,n;
clrscr();
while(1)
{
printf("\n\t\t1.creat     : ");
printf("\n\t\t2.display   : ");
printf("\n\t\t3.insafter  : ");
printf("\n\t\t4.delafter  : ");
printf("\n\t\t5.exit      : ");
printf("\n\t\tenter choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n\t\thow many node you creat: ");
       scanf("%d",&n);
       for(i=0;i<n;i++)
       creat();
       break;
case 2:display();
       break;
case 3:printf("\n\t\t enter position: ");
       scanf("%d",&loc);
       printf("\n\t\t enter data: ");
       scanf("%d",&data);
       insafter(data,loc);
       break;
case 4:printf("\n\t\tenter position: ");
       scanf("%d",&loc);
       delafter(loc);
       break;
case 5:exit(0);
default:printf("\n\t\tsorry!!::wrong choice::");
}
}
}
NODEPTR getnode()
{
NODEPTR p;
p=(NODEPTR)malloc(sizeof(NODEPTR));
return p;
}
void creat()
{
NODEPTR p,q;
int data;
printf("\n\t\t enter data: ");
scanf("%d",&data);
p=getnode();
p->info=data;
if(list==NULL)
{
q=p;
}
else
{
list->next=p;
}
p->next=q;
list=p;
}
void display()
{
NODEPTR q;
if(list==NULL)
{
printf("\n\t\t void display ");
return;
}
else
{
q=list;
q=q->next;
printf("\n\t\t the circular linked list containts:\n\t\t");
do{
printf(" %d ",q->info);
q=q->next;
}
while(q!=list->next);
}
}
void insafter(int data,int loc)
{
NODEPTR p,q;
int i;
p=getnode();
p->info=data;
if(list==NULL)
printf("\n\t\t void insertion");
else
{
for(i=0,q=list;i<loc;i++,q=q->next);
p->next=q->next;
q->next=p;
printf("\n\t\t%d is inserted at %d position",data,loc+1);
}
}
void delafter(int loc)
{
NODEPTR p,q;
int i,d;
if(list==NULL)
{
printf("\n\t\tvoid deletion");
return;
}
q=list;
if(q==q->next)
printf("\n\t\t one node of circular linked list cannot be deleted");
else
{
for(q=list,i=0;i<loc-1;i++,q=q->next);
p=q->next;
d=p->info;
q->next=p->next;
free(p);
printf("\n\t\t%d is deleted from %d position",d,loc+1);
}
}




