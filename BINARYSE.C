int binsearch(int a[],int low,int key,int high);
void main()
{
int a[50];
int i,j,t,key,position,n;
clrscr();
printf("\n\t\tenter range: ");
scanf("%d",&n);
printf("\n\t\tenter elements:\n");
for(i=0;i<n;i++)
{
printf("\n\t\t\t\t");
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("\n\t\t elements:\n\t\t");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
printf("\n\n\t\t enter the searching element: ");
scanf("%d",&key);
position=binsearch(a,0,key,n-1);
if(position==-1)
printf("\n\t\tthe element %d is not found",key);
else
printf("\n\t\tthe element %d is found at %d position",key,position+1);
getch();
}
int binsearch(int a[],int low,int key,int high)
{
int mid;
if(low>high)
return -1;
else
{
mid=(low+high)/2;
return (key==a[mid]?mid:key>a[mid]?binsearch(a,mid+1,key,high):binsearch(a,low,key,mid-1));
}
}



