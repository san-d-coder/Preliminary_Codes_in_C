//#include<stdlib.h>
void creat(int a[],int low,int high);
void display(int a[],int low,int high);
void del(int a[],int low,int high,int pos);
void insert(int a[],int low,int high,int pos,int data);
void reverse(int a[],int low,int high);
void search(int a[],int low,int high,int key);
void main()
{
int a[50];
int ch,n,pos,data,key;
clrscr();
printf("\n\t\t enter the range of the array: ");
scanf("%d",&n);
while(1)
{
printf("\n\t\t 1.creat  : ");
printf("\n\t\t 2.display: ");
printf("\n\t\t 3.delete : ");
printf("\n\t\t 4.insert : ");
printf("\n\t\t 5.reverse: ");
printf("\n\t\t 6.search : ");
printf("\n\t\t 7.exit   : ");
printf("\n\t\t enter choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:creat(a,0,n);
       break;
case 2:display(a,0,n);
       break;
case 3:printf("\n\t\t enter position to be deleted: ");
       scanf("%d",&pos);
       del(a,0,n,pos);
       break;
case 4:printf("\n\t\t enter position: ");
       scanf("%d",&pos);
       printf("\n\t\t enter data: ");
       scanf("%d",&data);
       insert(a,0,n,pos,data);
       break;
case 5:reverse(a,0,n);
       break;
case 6:printf("\n\t\t enter the element to be searched: ");
       scanf("%d",&key);
       search(a,0,n,key);
       break;
case 7:exit(0);
default:printf("\n\t\t sorry!! wrong choice,try again ..");
}
}
}
void creat(int a[],int low,int high)
{
int data;
for(;low<high;low++)
{
printf("\n\t\t enter data: ");
scanf("%d",&data);
a[low]=data;
}
}
void display(int a[],int low,int high)
{
printf("\n\t\t elements:\n\t\t ");
for(;low<high;low++)
printf(" %d ",a[low]);
}
void del(int a[],int low,int high,int pos)
{
int j;
j=low;
for(j=pos;j<high;j++)
a[j-1]=a[j];
a[j-1]=0;
}
void insert(int a[],int low,int high,int pos,int data)
{
int j;
j=low;
for(j=high-1;j>=pos;j--)
a[j]=a[j-1];
a[j]=data;
}
void reverse(int a[],int low,int high)
{
int t;
for(;low<high/2;low++)
{
t=a[low];
a[low]=a[high-1-low];
a[high-1-low]=t;
}
}
void search(int a[],int low,int high,int key)
{
for(;low<high;low++)
{
if(a[low]==key)
break;
}
if(low==high)
printf("\n\t\t the element %d is not found",key);
else
printf("\n\t\t the element %d found at %d position",key,low);
}


