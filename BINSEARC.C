void main()
{
int a[10],i,n,m,c=0,l,u,mid;
clrscr();
printf("\n\t\t enter the size of the array: ");
scanf("%d",&n);
printf("\n\t\t enter the elements in ascending order: ");
for(i=0;i<n;i++)
{
printf("\n\t\t");
scanf("%d",&a[i]);
}
printf("\n\t\t elements:\n\t\t");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
printf("\n\t\t enter the element to be searched: ");
scanf("%d",&m);
l=0;
u=n-l;
while(l<=u)
{
mid=(1+u)/2;
if(m==a[mid])
{
c=l;
break;
}
else
{
if(m<a[mid])
u=mid-1;
else
l=mid+l;
}
}
if(c==0)
printf("\n\t\tthe element %d is not found",m);
else
printf("\n\t\tthe element %d is found at %d position",m,mid);
getch();
}

