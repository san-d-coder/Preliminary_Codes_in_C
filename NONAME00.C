//in the name of GOD
void main()
{
int a[10];
int s,i,n,j,t;
clrscr();
printf("\n\t\tenter the range: ");
scanf("%d",&n);
printf("\n\t\tenter the %d element",n);
for(i=0;i<n;i++)
{
printf("\n\t\t\t");
scanf("%d",&a[i]);
}
printf("\n\t\tbefore sorting, the elements:\n\t\t");
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
printf("\n\t\tafter sorting, the elements are:\n\t\t");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
getch();
}
