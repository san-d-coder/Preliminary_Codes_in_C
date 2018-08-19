void main()
{
int a[50];
int i,n,j,s,t;
clrscr();
//textcolor(3);
printf("\n\t\t enter the range: ");
scanf("%d",&n);
printf("\n\t\t enter %d elements: ",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n\t\t before sorting elements:\n\t\t");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
for(i=0;i<n-1;i++)
{
s=i;
for(j=i+1;j<n;j++)
{
if(a[s]>a[j])
s=j;
}
if(i!=s)
{
t=a[i];
a[i]=a[s];
a[s]=t;
}
}
printf("\n\t\t after sorting elements:\n\t\t");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
getch();
}



































