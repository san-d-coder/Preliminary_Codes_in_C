struct q
{
int a[50];
int rear;
int front;
};
typedef struct q s;
void initq(s *pq);
void insert(s *pq,int data);
void display(s *pq);
void del(s *p);
void main()
{
int data,ch;
struct q pq;
clrscr();
initq(&pq);
while(1)
{
printf("\n\t\t 1.insert :");
printf("\n\t\t 2.display:");
printf("\n\t\t 3.delete :");
printf("\n\t\t 4.exit   :");
printf("\n\t\t please enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n\t\t enter data: ");
       scanf("%d",&data);
       insert(&pq,data);
       break;
case 2:display(&pq);
       break;
case 3:del(&pq);
       break;
case 4:exit(0);
default:printf("\n\t\t sorry!! wrong choice,try again..\n");
}
}
}
void initq(s *pq)
{
pq->rear=-1;
pq->front=-1;
}
void insert(s *pq,int data)
{
if(pq->rear==(50-1))
printf("\n\t\t overflow\n");
else
{
pq->rear++;
pq->a[pq->rear]=data;
if(pq->front==-1)
{
pq->front=0;
}
printf("\n\t\t %d is inserted\n",data);
}
}
void display(s *pq)
{
int i=0;
if(pq->front==-1||pq->front>pq->rear)
printf("\n\t\t void display\n");
else
{
printf("\n\t\t queue containts:\n\t\t");
for(i=pq->front;i<=pq->rear;i++)
printf(" %d ",pq->a[i]);
}
}
void del(s *pq)
{
int d;
if(pq->front==-1||pq->front>pq->rear)
printf("\n\t\t underflow\n");
else
{
d=pq->a[pq->front];
pq->front++;
printf("\n\t\t %d is deleted\n",d);
}
}