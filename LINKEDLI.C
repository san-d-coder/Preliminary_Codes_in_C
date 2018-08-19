#include<stdlib.h>
struct node{
int info;
struct node *next;
}*list=NULL;
typedef struct node *NODEPTR;
NODEPTR getnode();
void creat();
void insbeg(int data);
void insend(int data);
void inspos(int data,int pos);
void display();
void delbeg();
//void delend();
void delpos(int pos);
void count();
void reverse();
void search();
void main()
{
int data,ch,pos,key;
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
printf("\n\t\t9.count of elements             : ");
printf("\n\t\t10.search in linked list        : ");
printf("\n\t\t11.reverse of linked list       : ");
printf("\n\t\t12.exit from output screen      : ");
printf("\n\n\t\t enter the choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1://printf("\n\t\t enter the data: ");
       //scanf("%d",&data);
       creat();
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
/*case 7:delend();
       break;*/
case 8:printf("\n\t\t enter the position: ");
       scanf("%d",&pos);
       delpos(pos);
       break;
case 9:count();
       break;
case 10:printf("\n\t\t enter the searching element: ");
	scanf("%d",&key);
	search();
	break;
case 11:reverse();
	break;
case 12:exit(0);
default:printf("\n\t\tsorry!!! :::wrong choice:::");
}
}
}
NODEPTR getnode()
{
NODEPTR p;
p=(NODEPTR)malloc((sizeof(NODEPTR)));
return p;
}
void creat()
{
NODEPTR p,q;
int i,n,data;
printf("\n\t\t enter number of nodes: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
p=getnode();
printf("\n\t\t enter data: ");
scanf("%d",&data);
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
}
}
}
void insbeg(int data)
{
NODEPTR p;
p=getnode();
p->info=data;
p->next=NULL;
if(list==NULL)
{
list=p;
}
else
{
p->next=list;
list=p;
}
printf("\n\t\tthe node with data %d is inserted at beginning\n",data);
}
void insend(int data)
{
NODEPTR p,q;
p=getnode();
p->info=data;
p->next=NULL;
if(list==NULL)
printf("\n\t\t void insertion\n");
else
{
for(q=list;q->next!=NULL;q=q->next);
q->next=p;
}
printf("\n\t\tthe node with data %d is inserted at last\n",data);
}
void inspos(int data,int pos)
{
NODEPTR p,q;
int i;
p=getnode();
p->info=data;
p->next=NULL;
if(list==NULL)
printf("\n\t\t void insertion\n");
else
{
for(i=0,q=list;i<pos-1&&q->next!=NULL;i++,q=q->next);
p->next=q->next;
q->next=p;
}
printf("\n\t\tthe node with data %d is inserted at %d position\n",data,pos+1);
}
void display()
{
NODEPTR q;
if(list==NULL)
{
printf("\n\t\t void display\n");
return;
}
else
{
printf("\n\t\t the linked list contains :\n\t\t");
for(q=list;q!=NULL;q=q->next)
printf(" %d ",q->info);
}
}
void delbeg()
{
NODEPTR q;
if(list==NULL)
printf("\n\t\tvoid delete");
else
{
q=list;
list=q->next;
free(q);
}
printf("\n\t\t %d is deleted from beginning",q->info);
}
/*void delend()
{
NODEPTR q,p;
if(list==NULL)
printf("\n\t\t void delete");
else
{
for(q=list;q->next!=NULL;q=q->next)
p=q->next;
printf("\n\t\t the last element %d is deleted",p->info);
p=NULL;
free(q);
}
}*/
void delpos(int pos)
{
int i;
NODEPTR q,p;
if(list==NULL)
printf("\n\t\t void deletion");
else
{
for(i=0,q=list;i<pos-2&&q->next!=NULL;i++,q=q->next);
{
if(q->next==NULL)
{
printf("\n\t\tdelete node is not present");
return;
}
p=q->next;
q->next=p->next;
free(p);
}
}
}
void count()
{
NODEPTR q;
int count=0;
if(list==NULL)
printf("\n\t\t the list is empty");
else
{
for(q=list;q!=NULL;q=q->next)
count++;
}
printf("\n\t\t there are %d node in linked list",count);
}
void search(int key)
{
int pos=0;
NODEPTR q;
if(list==NULL)
{
printf("\n\t\t void search");
return;
}
else
{
for(q=list;q!=NULL;q=q->next)
{
pos++;
if(q->info==key)
{
printf("\n\t\t%d found at %d position",key,pos);
return;
}
}
printf("\n\t\t%d is not found",key);
}
}
void reverse()
{
NODEPTR q,r,s;
if(list==NULL)
printf("\n\t\t void reverse");
else
{
r=NULL;
q=list;
while(q!=NULL)
{
s=r;
r=q;
q=q->next;
r->next=s;
}
list=r;
}
}























