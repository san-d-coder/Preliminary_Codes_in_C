void main()
{
int a[50];
int i,n,t;
clrscr();
printf("\n\t\t enter the range: ");
scanf("%d",&n);
printf("\n\t\t enter the element of the array: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n\t\t the element of the array is given below: ");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
for(i=0;i<n/2;i++)
{
t=a[i];
a[i]=a[n-1-i];
a[n-1-i]=t;
}
printf("\n\t\t the element of the array after reverse : ");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
getch();
}