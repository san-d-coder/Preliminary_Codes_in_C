struct node
{
int info;
struct node *next;
}*list1=NULL,*list2=NULL;
typedef struct node *NODEPTR;
void creat1(int data);
void creat2(int data);
void display();
void concat();
void main()
{
int i,n,ch,data;
clrscr();
while(1)
{
printf("\n\t\t1.creat first lis  : ");
printf("\n\t\t2.creat second list: ");
printf("\n\t\t3.display          : ");
printf("\n\t\t4.concatenation    : ");
printf("\n\t\t5.exit             : ");
printf("\n\t\tenter the choice   : ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n\t\thow many node you creat? ");
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
       printf("\n\t\tenter data: ");
       scanf("%d",&data);
       creat1(data);
       }
       break;
case 2:printf("\n\t\thow many node you creat? ");
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
       printf("\n\t\tenter data: ");
       scanf("%d",&data);
       creat2(data);
       }
       break;
case