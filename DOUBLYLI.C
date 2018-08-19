#include<stdlib.h>
struct node{
struct node *prev;
int info;
struct node *next;
}*list=NULL;
typedef struct node *NODEPTR;
void creat(int data);
void insbeg(int data);
void insend(int data);
void inspos(int data,int pos);
void display();
void delbeg();
void delpos(int pos);
//void count();
//void reverse();
//void search(int key);
void main()
{
int data,ch,pos,key,i,n;
clrscr();
while(1)
{
printf("\n");
printf("\n\t\t1.creation  of linked list      : ");
printf("\n\t\t2.display                       : ");
printf("\n\t\t3.insertion at beginning        : ");
printf("\n\t\t4.insertion at last             : ");
printf("\n\t\t5.insertion at specific position: ");
printf("\n\t\t6.deletion  at beginning        : ");
printf("\n\t\t7.deletion  at last             : ");
printf("\n\t\t8.deletion  at specific position: ");
/*printf("\n\t\t9.count of elements             : ");
printf("\n\t\t10.search in linked list        : ");
printf("\n\t\t11.reverse of linked list       : ");*/
printf("\n\t\t9.exit from output screen      : ");
printf("\n\n\t\t enter the choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n\t\t how many node you creat? ");
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
       printf("\n\t\t enter data: ");
       scanf("%d",&data);
       creat(data);
       }
       break;
case 2:display();
       break;
case 3:printf("\n\t\t enter the data: ");
       scanf("%d",&data);
       insbeg(data);
       break;
case 4:printf("\n\t\t enter the data: ");
       scanf("%d",&data);
       insend(data);
       break;
case 5:printf("\n\t\t enter the position: ");
       scanf("%d",&pos);
       printf("\n\t\t enter the data: ");
       scanf("%d",&data);
       inspos(data,pos);
       break;
case 6:delbeg();
       break;
case 8:printf("\n\t\t enter the position: ");
       scanf("%d",&pos);
       delpos(pos);
       break;
/*case 9:count();
       break;
case 10:printf("\n\t\t enter the searching element: ");
	scanf("%d",&key);
	search(key);
	break;
case 11:reverse();
	break;*/
case 9:exit(0);
default:printf("\n\t\tsorry!!! :::wrong choice:::");
}
}
}
NODEPTR getnode()
{
NODEPTR p;
p=(NODEPTR)malloc(sizeof(NODEPTR));
return p;
}
void creat(int data)
{
NODEPTR p,q;
p=getnode();
p->prev=NULL;
p->info=data;
p->next=NULL;
if(list==NULL)
{
list=p;
}
else
{
for(q=list;q->next!=NULL;q=q->next);
q->next=p;
p->prev=q;
}
}
void display()
{
NODEPTR q;
if(list==NULL)
{
printf("\n\t\t void display ");
return;
}
printf("\n\t\t the list containts:\n\t\t");
for(q=list;q!=NULL;q=q->next)
printf(" %d ",q->info);
}
void insbeg(int data)
{
NODEPTR p;
p=getnode();
p->prev=NULL;
p->info=data;
p->next=NULL;
if(list==NULL)
{
list=p;
}
else
{
p->next=list;
list->prev=p;
list=p;
}
printf("\n\t\t %d is inserted at beginning",data);
}
void insend(int data)
{
NODEPTR p,q;
p=getnode();
p->prev=NULL;
p->info=data;
p->next=NULL;
if(list==NULL)
{
printf("\n\t\tvoid insertion ");
return;
}
for(q=list;q->next!=NULL;q=q->next);
p->prev=q;
q->next=p;
printf("\n\t\t %d is inserted at end",data);
}
void inspos(int data,int pos)
{
int i;
NODEPTR p,q;
p=getnode();
p->prev=NULL;
p->info=data;
p->next=NULL;
if(list==NULL)
{
printf("\n\t\t void insertion");
return;
}
for(q=list,i=0;i<pos-1&&q->next!=NULL;q=q->next);
p->next=q->next;
q->next->prev=p;
q->next=p;
p->prev=q;
printf("\n\t\t %d is inserted at %d position",data,pos+1);
}
void delbeg()
{
int d;
NODEPTR q;
if(list==NULL)
{
printf("\n\t\t void deletion ");
return;
}
q=list;
d=q->info;
q->next->prev=q->prev;
list=q->next;
free(q);
printf("\n\t\t %d is deleted from beggining",d);
}
void delpos(int pos)
{
int i,d;
NODEPTR p,q;
if(list==NULL)
{
printf("\n\t\t void deletion");
return;
}
for(q=list,i=0;i<pos-2&&q->next!=NULL;q=q->next);
p=q->next;
d=p->info;
p->next->prev=q;
q->next=p->next;
free(p);
printf("\n\t\t %d is deleted from %d position",d,pos+1);
}


