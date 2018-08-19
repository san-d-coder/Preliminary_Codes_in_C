void main()
{
int a[50];
int i,n;
clrscr();
printf("\n\t\t enter the range: ");
scanf("%d",&n);
a[0]=0;
a[1]=1;
for(i=2;i<n;i++)
a[i]=a[i-2]+a[i-1];
printf("\n\t\t the fibonacci series is: ");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
getch();
}