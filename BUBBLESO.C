void main()
{
int a[50];
int i,n,j,s,t;
clrscr();
//textcolor(3);
printf("\n\t\t enter the range: ");
scanf("%d",&n);
printf("\n\t\t enter the %d element: ",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n\t\t before sorting elements:\n\t\t");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("\n\t\t after sorting elements:\n\t\t");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
getch();
}
