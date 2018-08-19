struct stack
{
int a[50];
int top;
};
typedef struct stack s;
void initstack(s *ps);
void push(s *ps,int data);
void display(s *ps);
void pop(s *ps);
void main()
{
int data,ch;
s ps;
clrscr();
initstack(&ps);
while(1)
{
printf("\n\t\t 1.push   :");
printf("\n\t\t 2.display:");
printf("\n\t\t 3.pop    :");
printf("\n\t\t 4.exit   :");
printf("\n\t\t please enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n\t\t enter data: ");
       scanf("%d",&data);
       push(&ps,data);
       break;
case 2:display(&ps);
       break;
case 3:pop(&ps);
       break;
case 4:exit(0);
default:printf("\n\t\t sorry!! wrong choice,try again..\n");
}
}
}
void initstack(s *ps)
{
ps->top=-1;
}
void push(s *ps,int data)
{
if(ps->top==(50-1))
printf("\n\t\t overflow \n");
else
{
ps->top++;
ps->a[ps->top]=data;
printf("\n\t\t %d is inserted\n",data);
}
}
void display(s *ps)
{
int i;
if(ps->top==-1)
printf("\n\t\t void display\n");
else
{
printf("\n\t\t elements:\n\t\t ");
for(i=0;i<=ps->top;i++)
printf(" %d ",ps->a[i]);
}
}
void pop(s *ps)
{
int d;
if(ps->top==-1)
printf("\n\t\t underflow \n");
else
{
d=ps->a[ps->top];
ps->top--;
printf("\n\t\t %d is deleted \n",d);
}
}

